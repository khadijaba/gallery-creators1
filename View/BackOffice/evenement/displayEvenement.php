<?php
include "../../../controller/EvenementC.php";
include "../../../Model/Evenement_Model.php";
$c = new EvenementC();
$tab = $c->list_Event();
?>
<center>
    <h1>Listes des evenements</h1>
    <h2>
        <a href="addEvenement.php">Add evenement</a>
    </h2>
</center>
<table border="1" align="center" width="70%">
    <tr>
        <th>Id event</th>
        <th>Nom event</th>
        <th>date event</th>
        <th>lieu event</th>
        <th>image event</th>
        <th>Update</th>
        <th>Delete</th>
    </tr>
    <?php

foreach ($tab as $event) {
?>
<tr>
    <td><?= $event['idEvent']; ?></td>
    <td><?= $event['nomEvent']; ?></td>
    <td><?= $event['dateEvent']; ?></td>
    <td><?= $event['lieuEvent']; ?></td>
    <td><img src="uploads/<?=$event['imgEvent']?>"></td>

    <td align="center">
        <a href="updateEvenement.php?idEvent=<?= $event['idEvent']; ?>">Update</a>
    </td>
    <td>
        <a href="deleteEvenement.php?idEvent=<?= $event['idEvent']; ?>">Delete</a>
    </td>
</tr>
<?php
}


?>
</table>