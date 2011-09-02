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

-- takes a path relative to the project root and returns an absolute path that 
-- this function will also enclose the path in quotes; allowing file paths with spaces to be used.
-- main purpose of this function is to generate paths that can be embedded into strings that consist
-- of system commands.
function normalizepath(path) 
	if os.is "windows" then
	
		-- Windows XP doesn't like forward slashes
		path = "\"" .. string.gsub(os.getcwd(), "/", "\\") .. "\\" .. string.gsub(path, "/", "\\") .. "\"";
	else 
		path = "\"" .. os.getcwd() .. "/" .. path .. "\"";
	end
	return path
end

newaction {
	trigger = "generate",
	description = "Generate the source code for the PHP parser and PHP lexer. This needs to be done " ..
					"whenever any bison or re2c files are modified.",
	execute = function()
	
		-- regenerate the parser and lexer implementation files
		-- re2c does not escape windows paths and leads to compile errors, turn off debug info
		cmd = "re2c -c -i --no-generation-date " ..
			"-o " .. normalizepath("src/language/Php53LexicalAnalyzerImpl.cpp") .. " " ..
			normalizepath("src/language/Php53LexicalAnalyzerImpl.re");
		code = os.execute(cmd) 
		if code ~= 0 then
			print("re2c command failed. Is re2c installed? Is it in the PATH?");	
		end
		cmd = "re2c -c -i --no-generation-date " ..
			"-o " .. normalizepath("src/language/LanguageDiscoveryClass.cpp") .. " " ..
			normalizepath("src/language/LanguageDiscoveryClass.re");
		code = os.execute(cmd) 
		if code ~= 0 then
			print("re2c command failed. Is re2c installed? Is it in the PATH?");	
		end
		cmd = "bison --no-lines --warnings=error --defines " ..
			"-o " .. normalizepath("src/language/Php53ParserImpl.cpp") .. " " ..
			normalizepath("src/language/Php53ParserImpl.y")
		code = os.execute(cmd) 
		if code ~= 0 then
			print("Bison command failed. Is bison installed? Is it in the PATH?");	
		end
	end
}
