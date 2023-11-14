<?php
include "../../../controller/EvenementC.php";
include "../../../Model/Evenement_Model.php";
$event = null;
$eventC = new EvenementC();
if (isset($_POST["nom_event"]) && isset($_POST["date_event"]) && isset($_POST["lieu_event"])){
        $nom_event = $_POST["nom_event"];
        $date_event = $_POST["date_event"];
        $lieu_event = $_POST["lieu_event"];
        if (!empty($nom_event) &&!empty($date_event) &&!empty($lieu_event)){
            $event = new Evenement(null, $nom_event, $date_event, $lieu_event);
            var_dump($event);
            $eventC->updateEvenement($event, $_GET['idEvent']);
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
    if (isset($_GET['idEvent'])) {
        $oldEvent = $eventC->showEvent($_GET['idEvent']);
        
    ?>
    <form action="" method="POST">
        <table>
        <tr>
            <td><label for="idEvent">Id event :</label></td>
            <td>
                <input type="text" id="idEvent" name="idEvent" value="<?php echo $_GET['idEvent'] ?>" readonly/>
            </td>
            </tr>
            <tr>
                <td><label for="nom_event">Nom event :</label></td>
                <td>
                    <input type="text" id="nom_event" name="nom_event" value="<?php echo $oldEvent['nomEvent']?>"/>
                </td>
            </tr>
            <tr>
                <td><label for="date_event">Date event :</label></td>
                <td>
                    <input type="date" id="date_event" name="date_event" value="<?php echo $oldEvent['dateEvent']?>"/>
                </td>
            </tr>
            <tr>
                <td><label for="lieu_event">lieu event:</label></td>
                <td>
                    <input type="text" id="lieu_event" name="lieu_event" value="<?php echo $oldEvent['lieuEvent']?>"/>
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