<?php
require "C:/xampp/htdocs/GalerieCreators/config.php";
class GalerieC{
    public function list_Galerie(){
        $req = "SELECT * FROM galeries";
        $db = config::getConnexion();
        try{
            $list = $db->query($req);
            return $list;
        } catch (Exception $e){
            die('Error:' . $e->getMessage());
        }
    }
    function deleteGalerie($id_gal){
        $sql = "DELETE FROM galeries WHERE idGal = :id";
        $db = config::getConnexion();
        $req = $db->prepare($sql);
        $req->bindValue(':id', $id_gal);
        try{
            $req->execute();
        } catch (Exception $e) {
            die('Error:' . $e->getMessage());
        }
    }

    function addGalerie($galerie){
        $sql = "INSERT INTO galeries
        VALUES (null, :nom_gal, :propriete_gal, :lieu_gal)";
        $db = config::getConnexion();
        try {
            $query = $db->prepare($sql);
            $query->execute([
                'nom_gal'  => $galerie->getNomGalerie(),
                'propriete_gal' => $galerie->GetProprieteGalerie() , 
                'lieu_gal' => $galerie->get_lieuGalerie()
            ]);
        } catch (Exception $e) {
            echo 'Error: ' . $e->getMessage();
        }
    }
    function showGalerie($id_gal){
        $sql = "SELECT * from galeries where idGal = :idG";
        $db = config::getConnexion();
        try {
            $query = $db->prepare($sql);
            $query->bindValue(':idG', $id_gal);
            $query->execute();
            $Event = $query->fetch();
            return $Event;
        } catch (Exception $e) {
            die('Error: ' . $e->getMessage());
        }
    }
    function updateGalerie($galerie, $id_galerie){
        try {
            $db = config::getConnexion();
            $query = $db->prepare(
                'UPDATE galeries SET 
                    nomGal  = :nom_galerie,
                    dateGal = :propriete_galerie,
                    lieuGal = :lieu_galerie
                WHERE idGal = :id_galerie'
            );
            $query->execute([
                'id_galerie' => $id_galerie,
                'nom_galerie' => $galerie->getNomGalerie(),
                'propriete_galerie' => $galerie->GetProprieteGalerie(),
                'lieu_galerie' => $galerie->get_lieuGalerie(),
            ]);
            echo $query->rowCount() . " records UPDATED successfully <br>";
        } catch (PDOException $e) {
            $e->getMessage();
        }
    }
}
?>