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
	trigger = "dist",
	description = "Build the MVC Editor distributable.",
	execute = function()
		if os.is "windows" then
			if os.isdir("dist") then
				os.execute("rmdir /s /q dist")
			end
			os.execute(
				"mkdir dist && " .. 
				"mkdir dist\\mvc_editor\\bin && " .. 
				"mkdir dist\\mvc_editor\\lib &&" .. 
				"mkdir dist\\mvc_editor\\resources && "  .. 
				"xcopy /S /Y Release\\*.dll dist\\mvc_editor\\bin && " ..
				"xcopy /S /Y /I lib\\xulrunner dist\\mvc_editor\\lib\\xulrunner && " ..
				"copy Release\\mvc_editor.exe dist\\mvc_editor\\bin &&" ..
				"copy resources\\native.php dist\\mvc_editor\\resources "
			)
		else
			os.execute(
				"rm -rf dist && " .. 
				"mkdir -p dist/mvc_editor/bin && " .. 
				"mkdir -p dist/mvc_editor/resources && " .. 
				"cp -R Release/*so* dist/mvc_editor/bin && " .. 
				"cp -R lib/xulrunner dist/mvc_editor/lib/ && " .. 
				"cp Release/mvc_editor dist/mvc_editor/bin/mvc_editor && " .. 
				"cp resources/native.php dist/mvc_editor/resources/ && " .. 
				"cd dist && " .. 
				"tar cjf mvc_editor.tar.bz2 mvc_editor"
			);
		end
	end
}
