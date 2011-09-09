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
-- @copyright  2009-2011 Roberto Perpuly
-- @license    http://www.opensource.org/licenses/mit-license.php The MIT License
-------------------------------------------------------------------

dofile "premake_action_prep.lua"
dofile "premake_action_icu.lua"
dofile "premake_action_wxwidgets.lua"
dofile "premake_action_xulrunner.lua"
dofile "premake_action_dist.lua"
dofile "premake_action_generate.lua"

-- these are the core wx widgets libraries and their Win32 dependencies (win dependencies listed first)
WX_LIBS_DEBUG = { 
	"winmm", "comctl32", "rpcrt4", "wsock32", "odbc32",
	"wxmsw28ud_core", "wxbase28ud", "wxexpatd",	"wxjpegd", "wxpngd", "wxregexud", 
	"wxtiffd","wxzlibd"
}

-- these are the core wx widgets libraries and their Win32 dependencies (win dependencies listed first)
WX_LIBS_RELEASE = { 
	"winmm", "comctl32", "rpcrt4", "wsock32", "odbc32",
	"wxmsw28u_core", "wxbase28u", "wxexpat", "wxjpeg", "wxpng", "wxregexu", 
	"wxtiff","wxzlib"
}

WX_LIBS_WINDOW_DEBUG = { "wxmsw28ud_adv", "wxmsw28ud_aui", "wxmsw28ud_html" }
WX_LIBS_WINDOW_RELEASE = { "wxmsw28u_adv", "wxmsw28u_aui", "wxmsw28u_html" }


-- these are the ICU unicode string libraries
ICU_LIBS_RELEASE = {
       "icudt", "icuin", "icuio", "icule",
       "iculx", "icutu", "icuuc"
}

-- these are the ICU unicode string libraries
ICU_LIBS_DEBUG = {
       "icudt", "icuind", "icuiod", "iculed",
       "iculxd", "icutud", "icuucd"
}

-- this configuration uses the icu-config binary to get the ICU header & library locations
-- this is usually the case on linux
function icuconfiguration(config, action)
	if config == "Debug" and action == "vs2008" then
		includedirs { "lib/icu/include/" }
		libdirs { "lib/icu/lib/" }
		links { ICU_LIBS_DEBUG }
	elseif config == "Debug" and (action == "gmake" or action == "codelite") then
		buildoptions { "`../../lib/icu/mvc_editor/Debug/bin/icu-config --cppflags`" }
		linkoptions { "`../../lib/icu/mvc_editor/Debug/bin/icu-config --ldflags --ldflags-icuio`" }
	elseif config == "Release" and action ==  "vs2008" then
		includedirs { "lib/icu/include/" }
		libdirs { "lib/icu/lib/" }
		links { ICU_LIBS_RELEASE }
	elseif config == "Release" and (action == "gmake" or action == "codelite") then
		buildoptions { "`../../lib/icu/mvc_editor/Release/bin/icu-config --cppflags`" }
		linkoptions { "`../../lib/icu/mvc_editor/Release/bin/icu-config --ldflags --ldflags-icuio`" }
	end
end

-- this configuration uses the wx-config binary to get the wx header & library locations
-- this is usually the case on linux
-- this configuration sets up the WX library and include files for Visual Studio projects
-- NOTE: for this configuration to work correctly a WXWIN environment variable must be defined and
-- must point to the location of wxWidgets
function wxconfiguration(config, action)
	if config == "Debug" and action == "vs2008" then
		libdirs { "$(WXWIN)/lib/vc_dll/" }
		includedirs { "$(WXWIN)/include/", "$(WXWIN)/lib/vc_dll/mswud/" }
		
		-- wxWidgets framework needs these
		-- tell wxWidgets to import DLL symbols
		defines { "WIN32", "_DEBUG", "_WINDOWS", "WXUSINGDLL" }
		
		-- enable the "Use Unicode Character Set" option under General .. Character Set
		-- wxWidgets needs this in order to link properly
		flags { "Unicode" }
		links { WX_LIBS_DEBUG }
	elseif config == "Debug" and (action == "gmake" or action == "codelite") then
		buildoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Debug/bin/wx-config --cxxflags --debug=yes --unicode=yes`" }
		linkoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Debug/bin/wx-config --debug=yes --unicode=yes --libs core,base`" }
	elseif config == "Release" and action ==  "vs2008" then
		libdirs { "$(WXWIN)/lib/vc_dll/" }
		includedirs { "$(WXWIN)/include/", "$(WXWIN)/lib/vc_dll/mswu/" }
		
		-- wxWidgets framework needs these
		-- tell wxWidgets to import DLL symbols
		defines { "WIN32", "_WINDOWS", "__WXMSW__", "WXUSINGDLL" }
		
		-- enable the "Use Unicode Character Set" option under General .. Character Set
		-- wxWidgets needs this in order to link properly
		flags { "Unicode", "Optimize" }
		links { WX_LIBS_RELEASE } 
	elseif config == "Release" and (action == "gmake" or action == "codelite") then
		buildoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Release/bin/wx-config --cxxflags --debug=no --unicode=yes`" }
		linkoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Release/bin/wx-config --debug=no --unicode=yes --libs core,base`" }
	end
end

function wxappconfiguration(config, action)

	if action == "vs2008" then
	
		-- prevent the  "error LNK2019: unresolved external symbol _main referenced in function ___tmainCRTStartup
		flags { "WinMain" }
	end
	
	if config == "Debug" and (action == "gmake" or action == "codelite") then
		linkoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Debug/bin/wx-config --debug=yes --unicode=yes --libs aui,adv`" }
	elseif config == "Debug" and action ==  "vs2008" then
		links { WX_LIBS_WINDOW_DEBUG } 
	elseif config == "Release" and (action == "gmake" or action == "codelite") then
		linkoptions { "`../../lib/wxWidgets-2.8.10/mvc_editor/Release/bin/wx-config --debug=no --unicode=yes --libs aui,adv`" }
	elseif config == "Release" and action ==  "vs2008" then
		links { WX_LIBS_WINDOW_RELEASE } 
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

-- solution directory structure
-- the toolset files will be deposited in the build/ directory
-- each toolset will have its own directory
-- the executable files will be placed in the configuration directory (Debug/ or Release/)
-- compile flags will be set to be stricter than normal
solution "mvc_editor"
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
	configuration "gmake or codelite"
	
		-- link against our own version of wxWidgets / ICU instead of any installed in the system
		linkoptions { "-Wl,-rpath=./" }
	configuration { "Debug", "vs2008" }
		
		-- prevent "warning LNK4098: defaultlib 'MSVCRTD' conflicts with use of other libs; use /NODEFAULTLIB:library"
		buildoptions { "/MDd" }
	
	project "mvc_editor"
		language "C++"
		kind "WindowedApp"
		files { "src/**.cpp", "src/**.h", "*.lua", "src/**.re, src/**.y, src/**.hpp" }
		includedirs { "src/", "lib/keybinder/include/" }
		links { "tests", "keybinder" }
		
		configuration "Debug"
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
		configuration { "Debug", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links { "wxmsw28ud_stc" }			
			postbuildcommands { "cd " .. normalizepath("Debug") .. " && tests.exe" }
		configuration { "Debug", "gmake or codelite" }
			links { "wx_gtk2ud_stc-2.8" }
			postbuildcommands { "cd " .. normalizepath("Debug") .. " && ./tests" }
		configuration { "Release", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links { "wxmsw28u_stc" }			
			postbuildcommands { "cd " .. normalizepath("Release") .. " && tests.exe"  }
		configuration { "Release", "gmake or codelite" }
			links { "wx_gtk2u_stc-2.8" }
			postbuildcommands { "cd " .. normalizepath("Release") .. " && ./tests" }
			
	project "tests"
		language "C++"
		kind "ConsoleApp"
		files { 
			"tests/**.cpp", 
			"src/environment/ApacheClass.cpp" ,
			"src/language/ParserClass.cpp",
			"src/language/LexicalAnalyzerClass.cpp",
			"src/language/SymbolTableClass.cpp",
			"src/language/UCharBufferedFileClass.cpp",
			"src/language/Php53LexicalAnalyzerImpl.cpp",
			"src/language/Php53ParserImpl.cpp",
			"src/language/LanguageDiscoveryClass.cpp",
			"src/search/DirectorySearchClass.cpp",
			"src/search/FinderClass.cpp",
			"src/search/FindInFilesClass.cpp",
			"src/search/ResourceFinderClass.cpp",
			"src/windows/StringHelperClass.cpp"
		}
		includedirs { "src/", "lib/UnitTest++/src/", "tests/" }
		links { "unit_test++" }
		
		configuration "Debug"
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
			wxconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
			wxconfiguration("Release", _ACTION)
			
	project "resource_finder_profiler"
		language "C++"
		kind "ConsoleApp"
		files { 
			"profilers/resource_finder_profiler.cpp",
			"src/language/*.cpp",
			"src/search/ResourceFinderClass.cpp",
			"src/search/DirectorySearchClass.cpp",
			"src/language/ParserClass.cpp",
			"src/search/FinderClass.cpp",
			"src/windows/StringHelperClass.cpp"
		}
		includedirs { "src/" }
		
		configuration "Debug"
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
			wxconfiguration("Debug", _ACTION)
		configuration { "Release"}
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
			wxconfiguration("Release", _ACTION)

	project "find_in_files_profiler"
		language "C++"
		kind "ConsoleApp"
		files { 
			"profilers/find_in_files_profiler.cpp",
			"src/search/FindInFilesClass.cpp",
			"src/search/DirectorySearchClass.cpp",
			"src/search/FinderClass.cpp",
			"src/windows/StringHelperClass.cpp"
		}
		includedirs { "src/" }
		configuration "Debug"
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
			wxconfiguration("Debug", _ACTION)
		configuration { "Release"}
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
			wxconfiguration("Release", _ACTION)
			
	project "code_control_profiler"
		language "C++"
		kind "WindowedApp"
		files { 
			"profilers/code_control_profiler.cpp",
			"src/widgets/CodeControlOptionsClass.cpp",
			"src/widgets/CodeControlClass.cpp",
			"src/windows/StringHelperClass.cpp",
			"src/php_frameworks/ProjectClass.cpp",
			"src/language/*.cpp",
			"src/search/FinderClass.cpp",
			"src/search/FindInFilesClass.cpp",
			"src/search/ResourceFinderClass.cpp"
		}
		includedirs { "src/" }
		configuration "Debug"
			pickywarnings(_ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
			icuconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
			icuconfiguration("Release", _ACTION)
		configuration { "Debug", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links {  "wxmsw28ud_stc" }
		configuration {"Debug", "gmake or codelite"} 
			links { "wx_gtk2ud_stc-2.8" }
		configuration { "Release", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links {  "wxmsw28u_stc" }
		configuration {"Release", "gmake or codelite"} 
			links { "wx_gtk2u_stc-2.8" }
	
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
		files { "lib//UnitTest++/src/tests/*.cpp" }
		
		-- enable Stuctured Exception Handling needed by UnitTest++
		flags { "SEH" }
		
		-- enable the "Use Unicode Character Set" option under General .. Character Set
		flags { "Unicode" }
		configuration { "vs2008" }
		
			-- dont bother with warnings  with using 'unsafe' strcopy
			defines { "_CRT_SECURE_NO_WARNINGS" }
			flags { "WinMain" }
			
		-- For this project, no need to differentiate between Debug or Release
		
	project "keybinder"
		language "C++"
		kind "SharedLib"
		files { "lib/keybinder/include/wx/*.h", "lib/keybinder/src/*.cpp" }
		
		-- this is needed so that symbols are exported
		defines { "DLL_EXPORTS", "WXMAKINGDLL_KEYBINDER" }
		includedirs { "lib/keybinder/include" }
		configuration { "Debug" }
			wxconfiguration("Debug", _ACTION)
		configuration { "Release" }
			wxconfiguration("Release", _ACTION)
		configuration { "vs2008" }
			-- prevent warning from killing build: warning C4018: '<' : signed/unsigned mismatch
			buildoptions { "/W1" }

	project "keybinder_test"
		language "C++"
		kind "WindowedApp"
		files { "lib/keybinder/sample/*.cpp" }
		includedirs { "lib/keybinder/include" }
		links { "keybinder" }
		configuration "Debug"
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
		configuration "Release"
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
			
	project "icu_file_tutorial"
		language "C++"
		kind "ConsoleApp"
		files { "tutorials/icu_file_tutorial.cpp" }
		configuration { "Debug" }
			pickywarnings(_ACTION)
			icuconfiguration("Debug", _ACTION)
		configuration { "Release" }
			pickywarnings(_ACTION)
			icuconfiguration("Release", _ACTION)
		
	project "generic_dir_tutorial"
		language "C++"
		kind "WindowedApp"
		files { "tutorials/generic_dir_tutorial.cpp" }
		configuration "Debug"
			pickywarnings(_ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
	configuration "Release"
			pickywarnings(_ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
			
	project "wx_styled_text_control_tutorial"
		language "C++"
		kind "WindowedApp"
		files { "tutorials/wx_styled_text_control_tutorial.cpp" }
		configuration "Debug"
			pickywarnings(_ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
		configuration { "Debug", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links {  "wxmsw28ud_stc" }
		configuration {"Debug", "gmake or codelite"} 
			links { "wx_gtk2ud_stc-2.8" }
		configuration { "Release", "vs2008" }
			includedirs { "$(WXWIN)/contrib/include/" }
			links {  "wxmsw28u_stc" }
		configuration {"Release", "gmake or codelite"} 
			links { "wx_gtk2u_stc-2.8" }

	project "wx_window_tutorial"
		language "C++"
		kind "WindowedApp"
		files { "tutorials/wx_window_tutorial.cpp" }
		configuration "Debug"
			pickywarnings(_ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
			
	project "wx_aui_tutorial"
		language "C++"
		kind "WindowedApp"
		files { "tutorials/wx_aui_tutorial.cpp" }
		configuration "Debug"
			pickywarnings(_ACTION)
			wxconfiguration("Debug", _ACTION)
			wxappconfiguration("Debug", _ACTION)
		configuration "Release"
			pickywarnings(_ACTION)
			wxconfiguration("Release", _ACTION)
			wxappconfiguration("Release", _ACTION)
