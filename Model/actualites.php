<?php
class Actualites
{
    private ?int $idActualites = null;
    private ?string $titre = null;
    private ?string $contenu = null;
    private ?string $source = null;
    private ?string $datePublication = null;

    public function __construct($id = null, $titre, $contenu, $source, $datePublication)
    {
        $this->idActualites = $id;
        $this->titre = $titre;
        $this->contenu = $contenu;
        $this->source = $source;
        $this->datePublication = $datePublication;
    }

    public function getIdActualites()
    {
        return $this->idActualites;
    }

    public function getTitre()
    {
        return $this->titre;
    }

    public function setTitre($titre)
    {
        $this->titre = $titre;
        return $this;
    }

    public function getContenu()
    {
        return $this->contenu;
    }

    public function setContenu($contenu)
    {
        $this->contenu = $contenu;
        return $this;
    }

    public function getSource()
    {
        return $this->source;
    }

    public function setSource($source)
    {
        $this->source = $source;
        return $this;
    }

    public function getDatePublication()
    {
        return $this->datePublication;
    }

    public function setDatePublication($datePublication)
    {
        $this->datePublication = $datePublication;
        return $this;
    }
}
?>
