<?php 
require "db_connection.php";

if($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["submit"])){
    $name = $_POST["name"];
    $address = $_POST["address"];
    $email = $_POST["email"];
    $faculty = $_POST["faculty"];
    $regNo = $_POST["regNo"];

    $insertQuery = "INSERT INTO students (name, address, email, faculty,
    regNo) VALUES ('$name', '$address', '$email', '$faculty', '$regNo'))";

    mysqli_query($db_connection, $insertQuery);

}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student form</title>
    <style>
        .form-fields{
            margin: 2rem;
        }
    </style>
</head>
<body>

<form action="" method="post">
<div class="form-fields">
 <label for="name">Name</label>
 <input type="text" name="name" id="name" placeholder="Enter ur Name">
</div>

<div class="form-fields">
 <label for="adddress">Address</label>
 <input type="text" name="adddress" id="adddress" placeholder="Enter ur adddress">
</div>

<div class="form-fields">
  <label for="email">Email</label>
  <input type="text" name="email" id="email" placeholder="Enter ur email">
</div>

<div class="form-fields">
  <label for="age">Age</label>
  <input type="text" name="age" id="age" placeholder="Enter ur age">
</div>

<div class="form-fields">
  <label for="faculty">Faculty</label>
  <input type="text" name="faculty" id="faculty" placeholder="Enter ur faculity">
</div>

<div class="form-fields">
  <label for="regNo">RegNo</label>
  <input type="text" name="regNo" id="regNo" placeholder="Enter ur regNo">
</div>

<div class="form-action">
    <input type="submit" name="submit">
    <input type="reset" name="reset">
</div>
</form>

</body>
</html>