<?php
session_start();
$u='admin'; $p='1234';

if(isset($_GET['logout'])){ session_destroy(); header('Location: index.php'); exit; }

if(isset($_POST['login']))
	if($_POST['u']==$u && $_POST['p']==$p) $_SESSION['ok']=1;
	else $err='wrong';

if(isset($_SESSION['ok'])){
	$_SESSION['s']=$_SESSION['s']??[];
	$_SESSION['id']=$_SESSION['id']??1;

	if(isset($_POST['save'])){
		$id=$_POST['id']??''; $n=trim($_POST['n']); $a=trim($_POST['a']); $c=trim($_POST['c']);
		if($n&&$a&&$c){
			if($id=='') $_SESSION['s'][]=['id'=>$_SESSION['id']++,'n'=>$n,'a'=>$a,'c'=>$c];
			else foreach($_SESSION['s'] as &$x) if($x['id']==$id) $x=['id'=>$id,'n'=>$n,'a'=>$a,'c'=>$c];
			header('Location: index.php'); exit;
		}
	}

	if(isset($_GET['del'])){
		$_SESSION['s']=array_values(array_filter($_SESSION['s'],fn($x)=>$x['id']!=$_GET['del']));
		header('Location: index.php'); exit;
	}

	$e=['id'=>'','n'=>'','a'=>'','c'=>''];
	if(isset($_GET['edit'])) foreach($_SESSION['s'] as $x) if($x['id']==$_GET['edit']) $e=$x;
}
?>
<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1">
<title>Student App</title>
<style>
*{box-sizing:border-box;margin:0;font-family:sans-serif} body{min-height:100vh;display:grid;place-items:center;background:#eef4ff;padding:12px} .box{width:min(900px,95vw);background:#fff;border:1px solid #ddd;border-radius:10px;padding:16px} input,button{padding:8px;margin:4px 0} input{width:100%} .row{display:grid;grid-template-columns:1fr 1fr 1fr auto;gap:8px} table{width:100%;border-collapse:collapse;margin-top:12px} th,td{border:1px solid #ccc;padding:8px;text-align:left} a{margin-right:8px} .top{display:flex;justify-content:space-between;align-items:center;gap:8px;margin-bottom:10px;flex-wrap:wrap} .msg{color:red;margin:8px 0}
</style>
</head>
<body>
<div class="box">
<?php if(!isset($_SESSION['ok'])): ?>
	<form method="post">
		<h2>Login</h2>
		<input name="u" placeholder="User">
		<input name="p" type="password" placeholder="Pass">
		<button name="login">Login</button>
		<?php if(isset($err)) echo "<p class='msg'>Wrong</p>"; ?>
	</form>
<?php else: ?>
	<div class="top"><h2>Student App</h2><a href="?logout=1">Logout</a></div>
	<form method="post">
		<input type="hidden" name="id" value="<?= $e['id'] ?>">
		<div class="row">
			<input name="n" placeholder="Name" value="<?= $e['n'] ?>">
			<input name="a" placeholder="Age" value="<?= $e['a'] ?>">
			<input name="c" placeholder="Class" value="<?= $e['c'] ?>">
			<button name="save"><?= $e['id'] ? 'Update' : 'Add' ?></button>
		</div>
	</form>
	<table>
		<tr><th>ID</th><th>Name</th><th>Age</th><th>Class</th><th>Action</th></tr>
		<?php foreach($_SESSION['s'] as $x): ?>
		<tr>
			<td><?= $x['id'] ?></td><td><?= $x['n'] ?></td><td><?= $x['a'] ?></td><td><?= $x['c'] ?></td>
			<td><a href="?edit=<?= $x['id'] ?>">Edit</a><a href="?del=<?= $x['id'] ?>">Del</a></td>
		</tr>
		<?php endforeach; ?>
	</table>
<?php endif; ?>
</div>
</body>
</html>
