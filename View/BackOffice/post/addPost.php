<?php

include "../../../Controller/ArtisteC.php";
include "../../../Controller/ActualitesC.php";

if ($_SERVER["REQUEST_METHOD"] === "POST" && isset($_POST["submit_artist"])) {
  
    $nom_artist = filter_input(INPUT_POST, "nom_artist", FILTER_SANITIZE_STRING);
    $prenom_artist = filter_input(INPUT_POST, "prenom_artist", FILTER_SANITIZE_STRING);
    $specialite_artist = filter_input(INPUT_POST, "specialite_artist", FILTER_SANITIZE_STRING);
    $biographie_artist = filter_input(INPUT_POST, "biographie_artist", FILTER_SANITIZE_STRING);
    $artist = new Artiste(null, $nom_artist, $prenom_artist, $specialite_artist, $biographie_artist);

    $artistC = new ArtisteC();

    if ($artistC->addArtist($artist)) {
        echo "Artiste ajouté avec succès!";
    } else {
        echo "Erreur lors de l'ajout de l'artiste à la base de données.";
    }
}

if ($_SERVER["REQUEST_METHOD"] === "POST" && isset($_POST["submit_actualites"])) {
    
    $titre_actualites = filter_input(INPUT_POST, "titre_actualites", FILTER_SANITIZE_STRING);
    $contenu_actualites = filter_input(INPUT_POST, "contenu_actualites", FILTER_SANITIZE_STRING);
    $source_actualites = filter_input(INPUT_POST, "source_actualites", FILTER_SANITIZE_STRING);
    $datePublication_actualites = filter_input(INPUT_POST, "datePublication_actualites", FILTER_SANITIZE_STRING);

    $actualites = new Actualites(null, $titre_actualites, $contenu_actualites, $source_actualites, $datePublication_actualites);

    
    $actualitesC = new ActualitesC();

    // Add the actualités to the database
    if ($actualitesC->addActualites($actualites)) {
        echo "Actualités ajoutées avec succès!";
    } else {
        echo "Erreur lors de l'ajout des actualités à la base de données.";
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ajouter Artiste et Actualités</title>
</head>
<body>
    <h2>Ajouter un Artiste</h2>
    <form action="" method="POST">
        

        <input type="submit" name="submit_artist" value="Ajouter l'Artiste">
    </form>

    <hr> 

    <h2>Ajouter des Actualités</h2>
    <form action="" method="POST">
        
        <label for="titre_actualites">Titre des Actualités:</label>
        <input type="text" id="titre_actualites" name="titre_actualites" required><br>

        <label for="contenu_actualites">Contenu des Actualités:</label>
        <textarea id="contenu_actualites" name="contenu_actualites" required></textarea><br>

        <label for="source_actualites">Source des Actualités:</label>
        <input type="text" id="source_actualites" name="source_actualites" required><br>

        <label for="datePublication_actualites">Date de Publication des Actualités:</label>
        <input type="text" id="datePublication_actualites" name="datePublication_actualites" required><br>

        <input type="submit" name="submit_actualites" value="Ajouter des Actualités">
    </form>
</body>
</html>
