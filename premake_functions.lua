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

-- takes a path relative to the project root and checks that it exists in the file system. if
-- the file does not exist the program will exit.
--
-- @param pathsToCheck a table of strings or a single string
--
function existence(pathsToCheck)
	paths = {}
	if 'string' == type(pathsToCheck) then
		table.insert(paths, pathsToCheck)
	elseif 'table' == type(pathsToCheck) then
		for key, value in pairs(pathsToCheck) do
			table.insert(paths, value)
		end
	end
	for key, value in pairs(paths) do
		if not os.isfile(value) then
			print("Required file not found: " .. value)
			print "Program will now exit"
			os.exit(1)
		end
	end
end

--
-- execute a table of commands
-- if a single command fails then the program will exit
--
-- @param basedir the directory where the commands will be executed from
-- @param cmds the list of commands
-- 
function batchexecute(basedir, cmds, errorMessage) 
	if #cmds then
		cmdString = "cd " .. basedir .. " && ";
		for key, cmd in ipairs(cmds) do
			cmdString = cmdString .. cmd
			if next(cmds, key)  then
				cmdString = cmdString .. " && ";
			end
		end
		if #cmdString then
			if 0 ~= os.execute(cmdString) then
				if errorMessage then 
					print(errorMessage)
				end
				print "Command Failed"
				print(cmdString)
				print "Program will now exit"
				os.exit(1)
			end
		end
	end
end

-- 
-- changes into destdir and unzips file
--
function decompress(destdir, file)
	batchexecute(destdir, {
		"tar zxf " .. file
	});
end