<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
	class Mahasiswa{
		public $namaDepan;
		public $nim;

		public function __construct($namaDepan, $nim) {
			$this->namaDepan = $namaDepan;
			$this->nim = $nim;
		}

		public function message() {
			return "Nama saya adalah " . $this->namaDepan . " " . $this->nim . "!";
		}
	}

	$Mahasiswa = new Mahasiswa("Fadhli", "197");
    echo $Mahasiswa->message();
    echo "<br>";

	?>
</body>

</html>