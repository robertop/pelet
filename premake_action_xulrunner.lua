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
-- @author     $Author$
-- @date       $Date$
-- @version    $Rev$ 
-------------------------------------------------------------------
newaction {
	trigger = "xulrunner",
	description = "Build the XulRunner binaries",
	execute = function()
		if os.is "windows" then
			code = os.execute("winrar x lib\\xulrunner-1.9.0.15.en-US.win32.zip* lib\\")
			if code > 0 then
				print("XULRunner library could not unzipped (looking for lib\\xulrunner-1.9.0.15.en-US.win32.zip). " ..
					"Is WinRAR installed and in the PATH? Does the zip file exist?")
			else 
				print("XULRunner library unzipped at lib\\xulrunner.");
			end
		else
			XUL_RUNNER_BUILD = os.getcwd() .. "/lib/"
			os.execute(
				"cd lib/ && " ..
				"tar xjf xulrunner-1.9.0.15-source.tar.bz2  && " ..
				"cp mvc_editor.mozconfig mozilla/.mozconfig  && " ..
				"cd mozilla  && " ..
				"patch -Np1  -i ../xulrunner-1.9.0.15.patch && " ..
				"make -f client.mk build  && " ..
				"cd obj  && " ..
				"make package  && " ..
				"cp dist/xulrunner*.tar.bz2 " .. XUL_RUNNER_BUILD .. "xulrunner.tar.bz2  && " ..
				"cd ".. XUL_RUNNER_BUILD .. " && " ..
				"tar xjf xulrunner.tar.bz2 && " ..
				"rm xulrunner.tar.bz2"
			);
		end
	end
}
