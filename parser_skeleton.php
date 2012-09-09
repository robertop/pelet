<?php

/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
 
/**
 * This is a command line script that takes in a bison file from a PHP source distribution
 * and strips it of any actions, leaving only the grammar rules.  We then use the output of
 * this script as the starting point of pelet parsers.
 * This script outputs the file to STDOUT.
 */
 
$srcFile = "";
if ($argc > 1) {
	$srcFile = $argv[1];
	$fp = fopen($srcFile, 'rb');
	if ($fp) {
		$rulesSection = false;
		$inAction = false;
		$inString = false;
		$braceCount = 0;
		$curr = ' ';
		$last = ' ';
		while (!feof($fp)) {
			$last = $curr;
			$curr = fgetc($fp);
			if ('%' == $curr && '%' == $last) {
				if (!$rulesSection) {
				
					// echo the previous '%' so that
					// below we echo the second '%' in order
					// to complete the rules delimiter
					echo '%';
				}
				
				$rulesSection = true;
			}
			if ($rulesSection) {
				if ("'" == $curr && !$inString) {
					$inString = true;
				}
				else if ("'" == $curr && $inString) {
					$inString = false;
				}
				else if ('{' == $curr && !$inString && !$inAction) {
					$braceCount = 1;
					$inAction = true;
				}
				else if ('{' == $curr && !$inString && $inAction) {
					$braceCount++;
				}
				else if ('}' == $curr && !$inString && $inAction && $braceCount > 0) {	
					$braceCount--;
				}
				if (!$inAction) {
					echo $curr;
				}
				
				// put after we echo so that we dont echo the final close brace
				if (0 == $braceCount) {
					$inAction = false;
				}
			}
		}
	}
	else  {
		echo "Could not open file: {$srcFile}\n";
	}
}
else {
	echo "This script needs one argument: the bison grammar file to parse.\n";
}