<?php

include "../../../Controller/ArtisteC.php";
include "../../../Controller/ActualitesC.php";


$artistC = new ArtisteC();
$artists = $artistC->getArtists(); 

$actualitesC = new ActualitesC();
$actualites = $actualitesC->getActualites(); 
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Afficher des Artistes et Actualités</title>
</head>
<body>
    
    <h2>Liste des Artistes et Actualités</h2>
    <ul>
        
        <?php foreach ($artists as $artist): ?>
            <li>
                <strong>Nom:</strong> <?php echo $artist['nom']; ?><br>
                <strong>Prénom:</strong> <?php echo $artist['prenom']; ?><br>
                <strong>Spécialité:</strong> <?php echo $artist['specialite']; ?><br>
                <strong>Biographie:</strong> <?php echo $artist['biographie']; ?><br>
                
                <hr>
            </li>
        <?php endforeach; ?>

        
        <?php foreach ($actualites as $actualite): ?>
            <li>
                <strong>Titre:</strong> <?php echo $actualite['titre']; ?><br>
                <strong>Contenu:</strong> <?php echo $actualite['contenu']; ?><br>
                <strong>Source:</strong> <?php echo $actualite['source']; ?><br>
                <strong>Date de Publication:</strong> <?php echo $actualite['datePublication']; ?><br>
                
                <hr>
            </li>
        <?php endforeach; ?>
    </ul>
</body>
</html>
