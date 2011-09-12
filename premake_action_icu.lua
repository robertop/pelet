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
	trigger = "icu",
	description = "Build the ICU libraries in Debug and Release mode",
	execute = function()
			if os.is "windows" then
				code = os.execute("winrar x lib\\icu4c-4_2_1-src.tgz* lib\\")
				if code > 0 then
					print("ICU library could not unzipped (looking for lib\\icu4c-4_2_1-src.tgz). " ..
						"Is WinRAR installed and in the PATH? Does the source archive exist?")
				else 
					print("ICU library unzipped at lib\\icu.");
					print("Open the following solution file n Visual Studio: lib\\icu\\source\\allinone\\allinone.sln")
					print("Choose Debug|Win32 Build. Go to Build .. Rebuild Solution")
					print("Choose Release|Win32 Build. Go to Build .. Rebuild Solution")
					print("(Note: Batch Build \"Select All\" won't work on Visual Studio 2008 Express Edition because it does not support 64 bit compilation)")
				end
			else
				-- build the debug version 
				ICU_BUILD =  os.getcwd() .. "/lib/icu/mvc_editor/Debug/"
				os.execute(
					"cd lib/ && " ..
					"tar xzf icu4c-4_2_1-src.tgz && " ..
					"cd icu/source && " .. 
					"./runConfigureICU --enable-debug --disable-release Linux --prefix=" .. ICU_BUILD .. " && " ..
					"make && " ..
					"make install"
				);
				
				-- build the release version
				ICU_BUILD =  os.getcwd() .. "/lib/icu/mvc_editor/Release/"
				os.execute(
					"cd lib/icu/source && " ..
					"make clean && " ..
					"./runConfigureICU Linux --prefix=" .. ICU_BUILD .. " && " ..
					"make && " .. 
					"make install"
				);
			end
	end
}
