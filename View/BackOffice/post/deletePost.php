<?php
include "../../../Controller/ArtisteC.php";
include "../../../Controller/ActualitesC.php";

// Handle artist deletion
if ($_SERVER["REQUEST_METHOD"] === "POST" && isset($_POST["delete_artist"])) {
    // Sanitize input data for artist deletion
    $id_to_delete_artist = filter_input(INPUT_POST, "id_to_delete_artist", FILTER_SANITIZE_NUMBER_INT);

    // Create an instance of the ArtisteC class
    $artistC = new ArtisteC();

    // Delete the artist from the database
    if ($artistC->deleteArtist($id_to_delete_artist)) {
        echo "Artiste supprimé avec succès!";
    } else {
        echo "Erreur lors de la suppression de l'artiste.";
    }
}


if ($_SERVER["REQUEST_METHOD"] === "POST" && isset($_POST["delete_actualites"])) {
    
    $id_to_delete_actualites = filter_input(INPUT_POST, "id_to_delete_actualites", FILTER_SANITIZE_NUMBER_INT);

    $actualitesC = new ActualitesC();

    if ($actualitesC->deleteActualites($id_to_delete_actualites)) {
        echo "Actualités supprimées avec succès!";
    } else {
        echo "Erreur lors de la suppression des actualités.";
    }
}


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
    <title>Supprimer des Artistes et Actualités</title>
</head>
<body>
    
    <h2>Liste des Artistes</h2>
    <ul>
        <?php foreach ($artists as $artist): ?>
            <li>
                <?php echo $artist['nom']; ?> 
                
                <form action="" method="POST" style="display: inline;">
                    <input type="hidden" name="id_to_delete_artist" value="<?php echo $artist['idArtiste']; ?>">
                    <input type="submit" name="delete_artist" value="Supprimer l'Artiste">
                </form>
            </li>
            <hr> 
        <?php endforeach; ?>
    </ul>

   
    <h2>Liste des Actualités</h2>
    <ul>
        <?php foreach ($actualites as $actualite): ?>
            <li>
                <?php echo $actualite['titre']; ?> 
                
                <form action="" method="POST" style="display: inline;">
                    <input type="hidden" name="id_to_delete_actualites" value="<?php echo $actualite['idActualites']; ?>">
                    <input type="submit" name="delete_actualites" value="Supprimer les Actualités">
                </form>
            </li>
            <hr> 
        <?php endforeach; ?>
    </ul>
</body>
</html>
