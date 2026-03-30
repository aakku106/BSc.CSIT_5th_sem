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

        .error{
            font-size: 14px;
            color: red;
        }
    </style>
</head>
<body>
    <?php
        $err = [];

        if($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["submit"])){
            $fullName = $_POST["fullName"];
            $age = $_POST["age"];
            $email = $_POST["email"];
            $address = $_POST["address"];
            $gender = $_POST["gender"];
            $faculty = $_POST["faculty"];

            if(empty($fullName)){
                $err['nameErr'] = "Name must be provided";
            } elseif(strlen($fullName) > 25){
                $err['nameErr'] = "Name can't be more than 25 character length";
            } else {
                $err['nameErr'] = "";
            }

        $EMAIL_REGEX = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$";
        if(!preg_match($EMAIL_REGEX, $email)){
            $err['emailErr'] = "Incorrect email format";
        } else {
            $err['emailErr'] = "";
        }
        }
    ?>
<h1>Form handling</h1>
<form action="" method="post">
<div class="form-field">
    <label for="fullName">Name</label>
    <input type="text" id="fullName" name="fullName" value=<?php echo $_POST['fullName']; ?>>
</div>
    <?php
        if(isset($err['nameErr']) || $err['nameErr'] != ""){
            echo '<span class="error">'.$err['nameErr'].'</span>';
        }
    ?>

<div class="form-field">
    <label for="age">Age</label>
    <input type="number" id="age" name="age">
</div>

<div class="form-field">
    <label for="email">Email</label>
    <input type="text" id="email" name="email">
</div>

    <?php
        if(isset($err['emailErr']) || $err['emailErr'] != ""){
            echo '<span class="error">'.$err['emailErr'].'</span>';
        }
    ?>
<div class="form-field">
    <label for="Address">Address</label>
    <input type="text" id="Address" name="Address">
</div>

<div class="form-field">
    <label>Enter your gender: </label>
    <input type="radio" value="male" id="male" name="gender"> Male
    <input type="radio" value="female" id="female" name="gender"> Female
    <input type="radio" value="other" id="other" name="gender"> Other
</div>

<div class="form-field">
    <label>Faculty: </label>
    <input type="radio" value="csit" id="csit" name="faculty"> BSCCsIT
    <input type="radio" value="bca" id="bca" name="faculty"> BCA
    <input type="radio" value="bba" id="bba" name="faculty"> BBA
</div>

<div class="form">
    <label for="">Province:</label>
    <select name="province">
        <option value="lumbini">Lumbini</option>
        <option value="karnali">Karnali</option>
        <option value="bagmati">Bagmati</option>
        <option value="madhesh">Madhesh</option>
        <option value="koshi">Koshi</option>
    </select>
</div>

<div class="form-actions">
    <input type="submit" name="submit">
    <input type="reset" id="reset" name="reset">
</div>
</form>
</body>
</html>
