-------------------------------------------------------------------
-- This software is released under the terms of the MIT License
-- 
-- Permission is hereby granted, free of charge, to any person obtaining a copy
-- of this software and associated documentation files (the "Software"), to deal
-- in the Software without restriction, including without limitation the rights
-- to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
-- copies of the Software, and to permit persons to whom the Software is
-- furnished to do so, subject to the following conditions:
-- 
-- The above copyright notice and this permission notice shall be included in
-- all copies or substantial portions of the Software.
-- 
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
-- OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
-- THE SOFTWARE.
--
-- @copyright  2009-2012 Roberto Perpuly
-- @license    http://www.opensource.org/licenses/mit-license.php The MIT License
-------------------------------------------------------------------

dofile "premake_functions.lua"
dofile "premake_action_generate.lua"

newoption {
	trigger = "icu-include",
	value = "path",
	description = "Directory Location of the ICU header files. " ..
	"This option should only be used on Win32 systems"
}

newoption {
	trigger = "icu-lib",
	value = "path",
	description = "Directory Location of the ICU library shared object files. " ..
	"This option should only be used on Win32 systems"
}

newoption {
	trigger = "icu-config",
	value = "path",
	description = "File location of the icu-config binary. If given, " .. 
		"it will be used to get the appropriate compiler and linker flags. " ..
		"This option should only be used on linux systems"
}

-- these are the ICU unicode string libraries (in Win32)
ICU_LIBS_RELEASE = {
       "icudt", "icuin", "icuio", "icule",
       "iculx", "icutu", "icuuc"
}

-- these are the ICU unicode string libraries (in Win32)
ICU_LIBS_DEBUG = {
       "icudt", "icuind", "icuiod", "iculed",
       "iculxd", "icutud", "icuucd"
}

-- this configuration uses the command line options to get the ICU header & library locations
function icuconfiguration(config, action)
	if config == "Debug" and _OPTIONS['icu-include'] then
		includedirs { _OPTIONS['icu-include'] }
		libdirs { _OPTIONS['icu-lib'] }
		links { ICU_LIBS_DEBUG }
	elseif config == "Release" and _OPTIONS['icu-include'] then
		includedirs { _OPTIONS['icu-include'] }
		libdirs { _OPTIONS['icu-lib'] }
		links { ICU_LIBS_RELEASE }
	elseif _OPTIONS['icu-config'] then
	
		-- use the execution operator '``' because the icu-config program
		-- will be used to generate the correct compile and linker flags
		buildoptions { "`" .. _OPTIONS['icu-config'] .. " --cppflags`" }
		linkoptions { "`" .. _OPTIONS['icu-config'] .. " --ldflags --ldflags-icuio`" }
	end
end

function pickywarnings(action) 
	if action == "vs2008" then
		flags { "FatalWarnings" }
	elseif action == "gmake" or action == "codelite" then
		
		-- when compiling strict warning checks; also check against variable length arrays
		-- since Visual Studio is not C99 compliant
		buildoptions { "-Wall", "-Wvla", "-Wno-comment"  }
	end
end

if ((not _OPTIONS.help) and (_ACTION ~= 'clean') and (_ACTION ~= 'generate')) then
	if ((not _OPTIONS['icu-include']) and (not _OPTIONS['icu-config'])) then
		error("Missing one of --icu-include or --icu-config. See --help for details")
	end
end

-- solution directory structure
-- the toolset files will be deposited in the build/ directory
-- each toolset will have its own directory
-- the executable files will be placed in the configuration directory (Debug/ or Release/)
-- compile flags will be set to be stricter than normal
solution "pelet"
	if _ACTION then
		location ("build/" .. _ACTION)
	end
	configurations { "Debug", "Release"}
	configuration "Debug"
		objdir "Debug"
		targetdir "Debug"
		flags { "Symbols" }
	configuration "Release"
		objdir "Release"
		targetdir "Release"
	configuration { "Debug", "vs2008" }
		
		-- prevent "warning LNK4098: defaultlib 'MSVCRTD' conflicts with use of other libs; use /NODEFAULTLIB:library"
		buildoptions { "/MDd" }
		
	project "sample"
		language "C++"
		kind "ConsoleApp"
		files { "sample/sample.cpp" }
		includedirs { "include" }
		links { "pelet", "tests" }
		
		configuration "Release"
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
		configuration { "Debug", "vs2008" }
			icuconfiguration("Debug", _ACTION)
			postbuildcommands { "cd " .. normalizepath("Debug") .. " && tests.exe" }
		configuration { "Debug", "gmake or codelite" }
			icuconfiguration("Debug", _ACTION)
			postbuildcommands { "cd " .. normalizepath("Debug") .. " && ./tests" }
		configuration { "Release", "vs2008" }
			icuconfiguration("Debug", _ACTION)
			postbuildcommands { "cd " .. normalizepath("Release") .. " && tests.exe"  }
		configuration { "Release", "gmake or codelite" }
			icuconfiguration("Debug", _ACTION)
			postbuildcommands { "cd " .. normalizepath("Release") .. " && ./tests" }
		
	project "pelet"
		language "C++"
		kind "SharedLib"
		files { "src/*", "include/**", "*.lua", "src/**.re", "src/**.y", "README.md" }
		includedirs { "include" }
		defines { "PELET_MAKING_DLL" }
		pickywarnings(_ACTION)
		configuration "Release"			
			icuconfiguration("Release", _ACTION)
		configuration { "Debug" }
			icuconfiguration("Debug", _ACTION)
								
	project "tests"
		language "C++"
		kind "ConsoleApp"
		files { 
			"tests/**.cpp",
			"tests/**.h"
		}
		includedirs { "include/", "lib/UnitTest++/src/", "tests/" }
		links { "pelet", "unit_test++" }
		
		-- dont bother with warnings  with using 'unsafe' fopen
		configuration { "vs2008" }
			defines { "_CRT_SECURE_NO_WARNINGS" }
		
		configuration { "gmake or codelite" }
			
			-- make it so that the test executable can find the pelet shared lib
			linkoptions { "-Wl,-rpath=./" }

		configuration "Debug"
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
			
	
	project "unit_test++"
		language "C++"
		kind "StaticLib"
		files { "lib/UnitTest++/src/*.cpp" }

		-- enable the "Use Unicode Character Set" option under General .. Character Set
		-- enable Stuctured Exception Handling needed by UnitTest++
		flags { "Unicode", "SEH" }
					
		-- For this project, no need to differentiate between Debug or Release
		configuration { "vs2008" }
			files { "lib/UnitTest++/src/Win32/*.cpp" }
			
			-- dont bother with warnings  with using 'unsafe' strcopy
			defines { "_CRT_SECURE_NO_WARNINGS", "_LIB" }

		configuration { "gmake or codelite" }
			files { "lib/UnitTest++/src/Posix/*.cpp" }
		 
	project "unit_test++_test"
		language "C++"
		kind "ConsoleApp"
		links { "unit_test++" }
		files { "lib/UnitTest++/src/tests/*.cpp" }
		
		-- enable Stuctured Exception Handling needed by UnitTest++
		flags { "SEH" }
		
		-- enable the "Use Unicode Character Set" option under General .. Character Set
		flags { "Unicode" }
		configuration { "vs2008" }
		
			-- dont bother with warnings  with using 'unsafe' strcopy
			defines { "_CRT_SECURE_NO_WARNINGS" }
			flags { "WinMain" }
			
		-- For this project, no need to differentiate between Debug or Release
		
