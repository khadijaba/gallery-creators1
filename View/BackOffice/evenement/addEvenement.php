<?php
include "../../../Controller/EvenementC.php";
include "../../../Model/Evenement_Model.php";
if (isset($_POST["nom_event"]) && isset($_POST["date_event"])
    && isset($_POST["lieu_event"]) && isset($_FILES["img_event"])){
    $nom_event = $_POST["nom_event"];
    $date_event = $_POST["date_event"];
    $lieu_event = $_POST["lieu_event"];
    
    // ++++++++++++ the image handling ++++++++++++++++++
    $img_name = $_FILES['img_event']['name'];
	$tmp_name = $_FILES['img_event']['tmp_name'];
    //  ----------- image handling ends here ------------
    $img_ex = pathinfo($img_name, PATHINFO_EXTENSION);
	$img_ex_lc = strtolower($img_ex);
	$allowed_exs = array("jpg", "jpeg", "png"); 
    if (!empty($nom_event)&& !empty($date_event)&&!empty($lieu_event)){
        if (in_array($img_ex_lc, $allowed_exs)){
            $new_img_name = uniqid("IMG-", true).'.'.$img_ex_lc;
            $img_upload_path = 'uploads/'.$new_img_name;
            move_uploaded_file($tmp_name, $img_upload_path);
            $event = new Evenement(null,$nom_event,$date_event,$lieu_event,$new_img_name);
            $eventC = new EvenementC();
            $eventC->addEvent($event);
            header('Location:displayEvenement.php');
        }
    }
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Evenement</title>
</head>
<body>
    <a href="displayEvenement.php">Back to list </a>
    <hr>
    <form action="" method="POST" enctype="multipart/form-data">
        <table>
            <tr>
                <td><label for="nom_event">Nom :</label></td>
                <td><input type="text" id="nom_event" name="nom_event" /></td>
            </tr>
            <tr>
                <td><label for="date_event">date event :</label></td>
                <td><input type="date" id="date_event" name="date_event" /></td>
            </tr>
            <tr>
                <td><label for="lieu_event">lieu :</label></td>
                <td><input type="text" id="lieu_event" name="lieu_event" /></td>
            </tr>
            <tr>
                <td><label for="img_event">image :</label></td>
                <td><input type="file" id="img_event" name="img_event" /></td>
            </tr>
            <td><input type="submit" value="Save"></td>
            <td><input type="reset" value="Reset"></td>
        </table>
    </form>
</body>
</html>