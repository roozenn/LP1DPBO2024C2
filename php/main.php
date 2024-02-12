<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Human</title>
    <style>
        .human-container {
            display: flex;
            align-items: center;
            margin-bottom: 10px;
        }

        .human-data {
            margin-right: 10px; /* Mengubah margin menjadi di sebelah kanan */
        }

        .human-image {
            margin-left: 10px; /* Memberikan margin ke kiri pada gambar */
        }
    </style>
</head>
<body>

<?php
require_once 'Human.php';

$dpr1 = new Human(1, "Hotman", "pertanian", "gerindra");
$dpr2 = new Human(2, "Hotman2", "pertani", "geri");
$dpr3 = new Human(3, "Hotman3", "tanian", "ndra");

$llist = [$dpr1, $dpr2, $dpr3];
?>

<h4>LIST AWAL</h4>
<?php
foreach ($llist as $human) {
    echo generateHumanHTML($human);
}

$temp = new Human(22, "luhut", "hukum", "golkar");
$llist[] = $temp;
?>
<p><i>Data berhasil ditambahkan</i></p>
<h4>LIST</h4>
<?php
foreach ($llist as $human) {
    echo generateHumanHTML($human);
}

$idUbah = 2;
foreach ($llist as &$human) {
    if ($human->get_id() == $idUbah) {
        $human->set_id(999);
        $human->set_name("tjazir");
        $human->set_bidang("keuangan");
        $human->set_partai("ppp");
    }
}
?>
<p><i>Data berhasil diubah</i></p>
<h4>LIST</h4>
<?php
foreach ($llist as $human) {
    echo generateHumanHTML($human);
}

$idHapus = 1;
foreach ($llist as $key => $human) {
    if ($human->get_id() == $idHapus) {
        unset($llist[$key]);
    }
}
?>
<p><i>Data berhasil dihapus</i></p>
<h4>LIST</h4>
<?php
foreach ($llist as $human) {
    echo generateHumanHTML($human);
}
?>

<h4>HASIL AKHIR</h4>
<?php
foreach ($llist as $human) {
    echo generateHumanHTML($human);
}

function generateHumanHTML($human) {
    return "<div class='human-container'>
                <div class='human-data'>" . $human . "</div>
                <img class='human-image' src='puan.png' alt='Human Image' width='20' height='20'>
            </div>";
}
?>
</body>
</html>
