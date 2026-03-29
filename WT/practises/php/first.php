<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My first php page</title>
    <style>
        .form-field{
            margin: 1rem;
        }
    </style>
</head>
<body>
    <?php
        if(isset($_POST["submit"])){
            echo "<div>" .$_POST["fullName"]."</div>";
            echo $_POST["age"]; 
            echo "<br /">;
            echo $_POST["email"];
        }
    ?>
<h1>Form handling</h1>
<form action="" method="post">
<div class="form-field">
    <label for="fullName">Name</label>
    <input type="text" name="fullName">
</div>

<div class="form-field">
    <label for="age">Age</label>
    <input type="number" name="age">
</div>

<div class="form-field">
    <label for="email">Email</label>
    <input type="email" name="email">
</div>

<div class="form-actions">
    <input type="submit" name="submit">
    <input type="reset" name="reset">
</div>
</form>
</body>
</html>
