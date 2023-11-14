<?php
include "c:/xampp/htdocs/GalerieCreators/controller/galerieC.php.php";
$c = new GalerieC();
$tab = $c->list_Galerie();
?>
<center>
    <h1>Liste des Galeries</h1>
    <h2>
        <a href="addGalerie.php">Add Galerie</a>
    </h2>
</center>
<table border="1" align="center" width="70%">
    <tr>
        <th>Id Galerie</th>
        <th>Nom Galerie</th>
        <th>propriete Galerie</th>
        <th>lieu Galerie</th>
        <th>Update</th>
        <th>Delete</th>
    </tr>
    <?php
    foreach ($tab as $galerie) {
    ?>
    <tr>
        <td><?= $galerie['idGal'];   ?></td>
        <td><?= $galerie['nomGal'];  ?></td>
        <td><?= $galerie['proprieteGal']; ?></td>
        <td><?= $galerie['lieuGal']; ?></td>
        <td align="center">
            <a href="updateEvenement.php?idEvent=<?php echo $galerie['idGal'];?>">Update</a>
        </td>
        <td><a href="deleteEvenement.php?idEvent=<?php echo $galerie['idGal'];?>">Delete</a></td>
    </tr>
    <?php
    }
    ?>
</table>