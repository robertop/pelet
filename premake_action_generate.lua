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

newaction {
	trigger = "generate",
	description = "Generate the source code for the PHP parser and PHP lexer. This needs to be done " ..
					"whenever any bison or re2c files are modified.",
	execute = function()
		local lexers = {
			"src/Php53LexicalAnalyzer.re",
			"src/Php54LexicalAnalyzer.re",
			"src/Php55LexicalAnalyzer.re",
			"src/Php56LexicalAnalyzer.re",
			"src/Php70LexicalAnalyzer.re",
			"src/Php71LexicalAnalyzer.re",
			"src/LanguageDiscoveryClass.re"
		};
		for index, lexerInput in ipairs(lexers) do
			local lexerOutput = string.gsub(lexerInput, '.re', '.cpp')
			-- regenerate the parser and lexer implementation files
			-- re2c does not escape windows paths and leads to compile errors, turn off debug info
			local cmd = "re2c -c -i --no-generation-date " ..
				"-o " .. normalizepath(lexerOutput) .. " " ..
				normalizepath(lexerInput);
			local code = os.execute(cmd) 
			if code ~= 0 then
				print("re2c command failed for file " .. lexerInput .. ". Is re2c installed? Is it in the PATH?");
			end
			print(cmd)
		end

		local parsers = {
			"src/Php53LintParser.y",
			"src/Php53ResourceParser.y",
			"src/Php53FullParser.y",

			"src/Php54LintParser.y",
			"src/Php54ResourceParser.y",
			"src/Php54FullParser.y",

			"src/Php55LintParser.y",
			"src/Php55FullParser.y",

			"src/Php56LintParser.y",
			"src/Php56FullParser.y",

			"src/Php70LintParser.y",
			"src/Php70FullParser.y",
			
			"src/Php71LintParser.y",
			"src/Php71FullParser.y"
		}

		for index, parserInput in ipairs(parsers) do
			local parserOutput = string.gsub(parserInput, '.y', '.cpp')
			local cmd = ""
			if os.is("windows") then
				-- in windows line macros dont work correctly
				cmd = "bison --warnings=error " ..
					" -o " .. normalizepath(parserOutput) .. " " ..
					normalizepath(parserInput)
			else 
				cmd = "bison  --warnings=error " ..
					" -o " .. normalizepath(parserOutput) .. " " ..
					normalizepath(parserInput)
			end
			local code = os.execute(cmd) 
			if code ~= 0 then
				print("Bison command failed for " .. parserInput .. ". Is bison installed? Is it in the PATH?");
			end
			print(cmd)
		end
	end
}
