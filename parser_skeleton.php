<?php

$srcFile = "";
if ($argc > 1) {
	$srcFile = $argv[1];
	$fp = fopen($srcFile, 'rb');
	if ($fp) {
		$rulesSection = false;
		$inAction = false;
		$inString = false;
		$curr = ' ';
		$last = ' ';
		while (!feof($fp)) {
			$last = $curr;
			$curr = fgetc($fp);
			if ('%' == $curr && '%' == $last) {
				$rulesSection = true;
			}
			if ($rulesSection) {
				if ("'" == $curr && !$inString) {
					$inString = true;
				}
				else if ("'" == $curr && $inString) {
					$inString = false;
				}
				else if ('{' == $curr && !$inString) {
					$inAction = true;
				}
				else if ('}' == $curr && !$inString) {
					$inAction = false;
				}
				if (!$inAction && '}' != $curr) {
					echo $curr;
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