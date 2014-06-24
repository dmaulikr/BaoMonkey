<?php 

    include 'includes/header.php';

    if(isset($_POST['email'])) {
 
    $email_to = "brieuc.dlf@icloud.com";
    $email_subject = "Email from Baomonkey Website";
 
    function died($error) {
 
        echo "We are very sorry, but there were error(s) found with the form you submitted. ";
        echo "These errors appear below.<br /><br />";
        echo $error."<br /><br />";
        echo "Please go back and fix these errors.<br /><br />";
        die();
    }
 
    if(!isset($_POST['name']) ||
        !isset($_POST['email']) ||
        !isset($_POST['comment'])) {
        died('We are sorry, but there appears to be a problem with the form you submitted.');       
    }
 
    $name = $_POST['name'];
    $email_from = $_POST['email'];
    $comment = $_POST['comment'];
    $error_message = "";
    $email_exp = '/^[A-Za-z0-9._%-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,4}$/';
 
    if(!preg_match($email_exp,$email_from)) {
   
      $error_message .= 'The Email Address you entered does not appear to be valid.<br />';
   
    }
 
    $string_exp = "/^[A-Za-z .'-]+$/";
 
    if(!preg_match($string_exp,$name)) {
   
      $error_message .= 'The Name you entered does not appear to be valid.<br />';
   
    }
   
    if(strlen($comment) < 2) {
   
      $error_message .= 'The Comments you entered do not appear to be valid.<br />';
   
    }
   
    if(strlen($error_message) > 0) {
   
      died($error_message);
   
    }
 
    $email_message = "Form details below.\n\n";
 
    function clean_string($string) {
 
      $bad = array("content-type","bcc:","to:","cc:","href");
      return str_replace($bad,"",$string);
 
    }
 
    $email_message .= "Name: ".clean_string($name)."\n";
    $email_message .= "Email: ".clean_string($email_from)."\n";
    $email_message .= "Comment: ".clean_string($comment)."\n";
 
    $headers = 'From: '.$email_from."\r\n".
    'Reply-To: '.$email_from."\r\n" .
    'X-Mailer: PHP/' . phpversion();
    @mail($email_to, $email_subject, $email_message, $headers);  
     
    ?>
 
    <style type="text/css"> body { background-color: #E9B35C; } </style>
    
    <div class="alert alert-succes">
        <p style="text-align: center;">Thank you for contacting us. We will be in touch with you very soon.</p>
    </div>
    <p style="text-align:center;"><a href="index.php">Retour</a></p>

<?php
 
}