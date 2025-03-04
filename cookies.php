<html>
<body>
<form method="post">
Name:<input type="text" name="name" id="name"><br>
<input type="submit">value="submit">
</form>
</body>
</htmi>
<?php
if($_SERVER["REQUEST_METHOD"]=="post"){
$name=$_POST['name'];
setcookie('name',$name,time()+(80400*30),'/');
echo"cookie set";
}
if(isset($_COOKIE['name']."!";
}else{
 echo "welcome";
 }
 ?>
