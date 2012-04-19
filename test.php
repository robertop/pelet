<?php

namespace my {

define('ONE', 'one');

}

namespace two {

define('ONE', 'two');


echo '\my\ONE=' . \my\ONE . "\n";
echo '\two\ONE=' . \two\ONE . "\n";

}
