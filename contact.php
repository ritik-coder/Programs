<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">

    <title>Welcome to iCanvass - An Enormous Coding Forum</title>
    <style>
      .container{
        min-height: 88vh;
  
      }
    </style>

    <title>Contact Us</title>
  </head>
  <body>


  <?php include 'partials/_header.php'; ?>

<?php
    if ($_SERVER['REQUEST_METHOD']=='POST') {
        $name=$_POST['name'];
        $email=$_POST['email'];
        $desc=$_POST['desc'];    
       
     
     
      // Connecting to the Database
            $servername= "localhost";
            $username= "root";
            $password= "";
            $database= "contacts";
            
            // Create a connection
            $conn= mysqli_connect($servername,$username,$password,$database);
            // Die if connection was not successful
            if (!$conn) {
                die("Sorry we failed to connect:  ".mysqli_connect_error());
            }
            else {
                
                 //Submit these to a DB
                //Sql query to be executed
                $sql= "INSERT INTO `contactus` (`name`, `email`, `concern`, `dt`) VALUES ('$name', '$email', '$desc', current_timestamp())";
                $result= mysqli_query($conn,$sql);

                
                if ($result) {
                    echo '<div class="alert alert-success alert-dismissible fade show" role="alert">
        <strong>SUCCESS!!</strong> Your entry has been submitted.
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
          <span aria-hidden="true">&times;</span>
        </button>
      </div>';
                }
                else {
                    echo "The record was not inserted successfully because of this error--->".mysqli_error($conn); 
                }
                    }
            

    }
   
?>

<div class="container mt-3">
    <h1>Contact us for your concerns</h1>
    <form action="/forum/partials/contact.php" method="post">
    <div class="form-group">
        <label for="name">Name</label>
        <input type="text" name="name" class="form-control" id="name" aria-describedby="emailHelp">
        <!-- <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone else.</small> -->
    </div>

    <div class="form-group">
        <label for="email">Email</label>
        <input type="email" name="email" class="form-control" id="email" aria-describedby="emailHelp">
        <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone else.</small>
    </div>

    <div class="form-group">
        <label for="desc">Description</label>
        <textarea class="form-control" name="desc" id="desc" cols="30" rows="10"></textarea>
    </div>
   
    <button type="submit" class="btn btn-success">Submit</button>
    </form> 
</div>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
  </body>
</html> 
<!-- isme hum email n password dalte h to vo get post request pe submit ho jati h -->



<?php include 'partials/_footer.php'; ?>

 
  
 
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.4.1.slim.min.js" integrity="sha384-J6qa4849blE2+poT4WnyKhv5vZF5SrPo0iEjwBvKU7imGFAV0wwj1yYfoRSJoZ+n" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.min.js" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuUD4Ih7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6" crossorigin="anonymous"></script>
  </body>
</html>