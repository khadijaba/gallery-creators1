<?php
include "C:/xampp/htdocs/GalerieCreators/Controller/galerieC.php.php";
$GalC = new GalerieC();
$GalC->deleteGalerie($_GET["idGal"]);
header('Location:displayGalerie.php');
?>