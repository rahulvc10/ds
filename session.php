<?php
session_start();
if(!isset($_SESSION['counter'])){
$_SESSION['counter']=0;}
$_SESSION['counter']++;
echo"u have visied this page".$_SESSION['counter']."times";
session_write_close();
?>
