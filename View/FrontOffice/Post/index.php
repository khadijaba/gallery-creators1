<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Doja kattous</title>
    <link rel="stylesheet" href="post.css">
</head>
<body>
    
    <h1>Ajouter un(e) artist(e)</h1>
    <form action="ajouter_artiste" method="post">
        <label for="nom_artiste">Nom de l'artiste:</label>
        <input type="text" id="nom_artiste" name="nom_artiste" required><br><br>

        <label for="prenom_artiste">Prénom de l'artiste:</label>
        <input type="text" id="prenom_artiste" name="prenom_artiste" required><br><br>

        <label for="genre_artiste">Genre de l'artiste:</label>
        <select id="genre_artiste" name="genre_artiste" required>
            <option value="female">Femme</option>
            <option value="male">Homme</option>
        </select><br><br>

        <label for="specialite_artiste">Spécialité de l'artiste:</label>
        <input type="text" id="specialite_artiste" name="specialite_artiste" required><br><br>

        <label for="biographie_artiste">Biographie de l'artiste:</label>
        <textarea id="biographie_artiste" name="biographie_artiste" rows="4" cols="50" required></textarea><br><br>

        <input type="submit" value="Ajouter artiste">
    </form>

    <h1>Ajouter une actualité</h1>
    <form action="ajouter_actualite" method="post">
        <label for="titre_actualite">Titre de l'actualité:</label>
        <input type="text" id="titre_actualite" name="titre_actualite" required><br><br>

        <label for="contenu_actualite">Contenu de l'actualité:</label>
        <textarea id="contenu_actualite" name="contenu_actualite" rows="4" cols="50" required></textarea><br><br>

        <label for="source_actualite">Source de l'actualité:</label>
        <input type="text" id="source_actualite" name="source_actualite" required><br><br>

        <label for="date_publication_actualite">Date de publication de l'actualité:</label>
        <input type="date" id="date_publication_actualite" name="date_publication_actualite" required><br><br>

        <input type="submit" value="Ajouter actualité">
    </form>
</body>
</html>
