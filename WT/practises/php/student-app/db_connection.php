<?php
define("SERVER", "localhost");
define("USERNAME", "root");
define("PASSWORD", "");
define("DB_NAME", "college");

$db_connection = mysqli_conect(SERVER, USERNAME, 
PASSWORD, DB_NAME);

if($db_connection == false){
    die("Failed to connect database". mysqli_connect_error());
}
?>

LAB - 4
Create a form with the following fields
 - Name,
 - Email,
 - Address, 
 - Gender,
 - Province,
 - Faculty,
 use server side validation to validate each fields.
 The validation message must be shown below each field
 on validation error.
