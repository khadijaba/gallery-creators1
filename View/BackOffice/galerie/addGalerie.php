<?php
include "C:/xampp/htdocs/GalerieCreators/Controller/galerieC.php.php";
include "C:/xampp/htdocs/GalerieCreators/Model/Galerie_Model.php.php.php";
if (isset($_POST["nom_galerie"]) && isset($_POST["propriete_galerie"])&& isset($_POST["lieu_galerie"])){
    $nom_gal = $_POST["nom_galerie"];
    $propriete_gal = $_POST["propriete_galerie"];
    $lieu_gal = $_POST["lieu_galerie"];
    if (!empty($nom_gal)&& !empty($propriete_gal)&&!empty($lieu_gal)){
        $galerie = new Galerie(null,$nom_gal,$propriete_gal,$lieu_gal);
        $galerieC = new GalerieC();
        $galerieC->addGalerie($galerie);
        header('Location:displayGalerie.php');
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
    <form action="" method="POST">
        <table>
            <tr>
                <td><label for="nom_galerie">Nom :</label></td>
                <td><input type="text" id="nom_galerie" name="nom_galerie" /></td>
            </tr>
            <tr>
                <td><label for="propriete_galerie">propriete :</label></td>
                <td><input type="text" id="propriete_galerie" name="propriete_galerie"/></td>
            </tr>
            <tr>
                <td><label for="lieu_galerie">lieu :</label></td>
                <td><input type="text" id="lieu_galerie" name="lieu_galerie"/></td>
            </tr>
            <td><input type="submit" value="Save"></td>
            <td><input type="reset" value="Reset"></td>
        </table>
    </form>
</body>
</html>