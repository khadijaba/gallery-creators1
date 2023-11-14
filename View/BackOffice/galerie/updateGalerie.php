<?php
include "c:/xampp/htdocs/GalerieCreators/controller/galerieC.php";
include "c:/xampp/htdocs/GalerieCreators/Model/Galerie_Model.php.php";
$galerie = null;
$galerieC = new GalerieC();
if (isset($_POST["nom_galerie"]) && isset($_POST["propriete_galerie"]) && isset($_POST["lieu_galerie"])){
        $nom_gal = $_POST["nom_galerie"];
        $date_gal = $_POST["propriete_galerie"];
        $lieu_gal = $_POST["lieu_galerie"];
        if (!empty($nom_gal) &&!empty($date_gal) &&!empty($lieu_gal)){
            $galerie = new Evenement(null, $nom_gal, $date_gal, $lieu_gal);
            var_dump($galerie);
            $galerieC->updateGalerie($galerie, $_GET['idGal']);
            header('Location:displayEvenement.php');
    }
}
?>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Display</title>
</head>

<body>
    <button><a href="displayEvenement.php">Back to list</a></button>
    <hr>

    <?php
    if (isset($_GET['idGal'])) {
        $old_gal = $galerieC->showGalerie($_GET['idGal']);
        
    ?>
    <form action="" method="POST">
        <table>
        <tr>
            <td><label for="idGal">Id galerie :</label></td>
            <td>
                <input type="text" id="idGal" name="idGal" value="<?php echo $_GET['idGal'] ?>" readonly/>
            </td>
            </tr>
            <tr>
                <td><label for="nom_galerie">Nom galerie :</label></td>
                <td>
                    <input type="text" id="nom_galerie" name="nom_galerie" value="<?php echo $old_gal['nomGal']?>"/>
                </td>
            </tr>
            <tr>
                <td><label for="propriete_galerie">Date galerie :</label></td>
                <td>
                    <input type="date" id="propriete_galerie" name="propriete_galerie" value="<?php echo $old_gal['proprieteGal']?>"/>
                </td>
            </tr>
            <tr>
                <td><label for="lieu_galerie">lieu galerie:</label></td>
                <td>
                    <input type="text" id="lieu_galerie" name="lieu_galerie" value="<?php echo $old_gal['lieuGal']?>"/>
                </td>
            </tr>
            <td>
                <input type="submit" value="Save">
            </td>
            <td>
                <input type="reset" value="Reset">
            </td>
        </table>

    </form>
    <?php
    }
    ?>
</body>

</html>