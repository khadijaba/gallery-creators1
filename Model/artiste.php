<?php
class Artiste
{
    private ?int $idArtiste = null;
    private ?string $nom = null;
    private ?string $prenom = null;
    private ?string $specialite = null;
    private ?string $biographie = null;

    public function __construct(?int $id = null, string $nom, string $prenom, string $specialite, string $biographie)
    {
        $this->idArtiste = $id;
        $this->nom = $nom;
        $this->prenom = $prenom;
        $this->specialite = $specialite;
        $this->biographie = $biographie;
    }

    public function getIdArtiste(): ?int
    {
        return $this->idArtiste;
    }

    public function getNom(): ?string
    {
        return $this->nom;
    }

    public function setNom(?string $nom): self
    {
        $this->nom = $nom;
        return $this;
    }

    public function getPrenom(): ?string
    {
        return $this->prenom;
    }

    public function setPrenom(?string $prenom): self
    {
        $this->prenom = $prenom;
        return $this;
    }

    public function getSpecialite(): ?string
    {
        return $this->specialite;
    }

    public function setSpecialite(?string $specialite): self
    {
        $this->specialite = $specialite;
        return $this;
    }

    public function getBiographie(): ?string
    {
        return $this->biographie;
    }

    public function setBiographie(?string $biographie): self
    {
        $this->biographie = $biographie;
        return $this;
    }
}
?>