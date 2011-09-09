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
newaction {
	trigger = "prep",
	description = "Copy the shared libs to the same location as the binary so that the binary can find them",
	execute = function()
		if os.is "windows" then
			dlls = os.matchfiles("lib/icu/bin/*.dll")
			if #dlls > 0 then
				icuLibPath = os.getcwd() .. "\\lib\\icu\\bin\\"
				cmd = "xcopy /S /Y \"" .. icuLibPath .. "*.dll\" \"Debug\\\""
				print(cmd)
				os.execute(cmd)
			
				cmd = "xcopy /S /Y \"" .. icuLibPath .. "*.dll\" \"Release\\\""
				print(cmd)
				os.execute(cmd)
			else 
				print("ICU DLLs not found.  You need to build the ICU library. ")
				print("Extract ICU to lib\\icu")
				print("open lib\\icu\\source\\allinone\\allinone.sln")
				print("Choose Debug|Win32 Build. Go to Build .. Rebuild Solution")
				print("Choose Release|Win32 Build. Go to Build .. Rebuild Solution")
				print("(Note: Batch Build \"Select All\" won't work on Visual Studio 2008 Express Edition because it does not support 64 bit compilation)")
			end
			wxLocation = os.getenv("WXWIN");
			if wxLocation then
				dlls = os.matchfiles(wxLocation .. "/lib/vc_dll/*.dll");
				if #dlls > 0 then
					cmd = "xcopy /S /Y \"" .. wxLocation .. "\\lib\\vc_dll\\*.dll\" \"Debug\\\""
					print(cmd)
					os.execute(cmd)
					
					cmd = "xcopy /S /Y \"" .. wxLocation .. "\\lib\\vc_dll\\*.dll\" \"Release\\\""
					print(cmd)
					os.execute(cmd)
					
				else 
					print("wxWidgets DLLs not found.  You need to build the wxWidgets library (Unicode Debug and Unicode Release configurations). ")
					print("Use the Visual Studio solution provided by wxWidgets to build the libraries \n" .. 
							"1) Download wxPack. Install to a C:\\users\\[user]\\wxWidgets directory \n" ..
							"2) Open Solution wx.dsw located build\msw directory\n" .. 
							"3) Select 'DLL Debug Unicode' from Configuration Manager\n" .. 
							"4) Build Entire Solution\n" .. 
							"5) Select 'DLL Release Unicode' from Configuration Manager\n" .. 
							"6) Build Entire Solution\n" .. 
							"7) Open Solution stc.dsw located in contrib\build\msw directory\n" .. 
							"8) Select 'DLL Debug Unicode' from Configuration Manager\n" .. 
							"9) Build Entire Solution\n" .. 
							"10) Select 'DLL Release Unicode' from Configuration Manager\n" .. 
							"11) Build Entire Solution\n"
					);
				end
			else 
				print "WXWIN environment variable not found. Generated Solution file WILL NOT WORK. Please install wxPack."
			end
		else 
			os.execute("cp -r " .. os.getcwd() .. "/lib/icu/mvc_editor/Debug/lib/*.so* Debug/");
			os.execute("cp -r " .. os.getcwd() .. "/lib/icu/mvc_editor/Release/lib/*.so* Release/");
			os.execute("cp -r " .. os.getcwd() .. "/lib/wxWidgets-2.8.10/mvc_editor/Debug/lib/*.so* Debug/");
			os.execute("cp -r " .. os.getcwd() .. "/lib/wxWidgets-2.8.10/mvc_editor/Release/lib/*.so* Release/");
			if os.isdir "lib/soci/mvc_editor/lib64" then
				os.execute("cp -r " .. os.getcwd() .. "/lib/soci/mvc_editor/lib64/*.so* Debug/");
				os.execute("cp -r " .. os.getcwd() .. "/lib/soci/mvc_editor/lib64/*.so* Release/");
			else
				os.execute("cp -r " .. os.getcwd() .. "/lib/soci/mvc_editor/lib/*.so* Debug/");
				os.execute("cp -r " .. os.getcwd() .. "/lib/soci/mvc_editor/lib/*.so* Release/");
			end
		end
	end
}
