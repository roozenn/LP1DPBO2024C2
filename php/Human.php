<?php

class Human {
    private $id;
    private $name;
    private $bidang;
    private $partai;

    public function __construct($id, $name, $bidang, $partai) {
        $this->id = $id;
        $this->name = $name;
        $this->bidang = $bidang;
        $this->partai = $partai;
    }

    public function get_id() {
        return $this->id;
    }

    public function set_id($id) {
        $this->id = $id;
    }

    public function get_name() {
        return $this->name;
    }

    public function set_name($name) {
        $this->name = $name;
    }

    public function get_bidang() {
        return $this->bidang;
    }

    public function set_bidang($bidang) {
        $this->bidang = $bidang;
    }

    public function get_partai() {
        return $this->partai;
    }

    public function set_partai($partai) {
        $this->partai = $partai;
    }

    public function __toString() {
        return "{$this->id} {$this->name} {$this->bidang} {$this->partai}";
    }
}
?>
