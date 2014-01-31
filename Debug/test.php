<?php
/**
 * This is a define comment
 */
define('MAX_TIME', 5000);
/**
 * This is a class comment
 */
abstract class UserClass {
	/**
	 * This is a the user's name
	 * @var string
	 */
 	private $name;
	/**
	 * This is the default user name
	 * @var string
	 */
 	const DEFAULT_NAME = 'guest';
	/**
	 * The class constructor
	 * @return void
	 */
	function __construct() {
		echo 'in construct';
		$blog = new Blog();
		$msg = 'created a new blog';
		$anotherMsg = $msg;
		if ($blog->isNew()) {
			echo $msg;
		}
	}
	abstract function work();
	/** get the user's name */
	function getName() {
		return $this->name;
	}
	private static function setName($name) {
	}
}


/**
 * This is a function comment
 * @return boolean
 */
function showUser($user) {
	$newUser = factory($user);
	$name = $user->getName();
}
?>
