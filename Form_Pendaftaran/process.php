<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Get form data
    $nama = $_POST['nama'] ?? '';
    $email = $_POST['email'] ?? '';
    $telepon = $_POST['telepon'] ?? '';
    $institusi = $_POST['institusi'] ?? '';
    $jenis_kegiatan = $_POST['jenis_kegiatan'] ?? '';
    $catatan = $_POST['catatan'] ?? '';

    // Validate data
    $errors = [];
    
    if (empty($nama) || strlen($nama) < 3) {
        $errors[] = "Nama tidak valid";
    }
    
    if (empty($email) || !filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $errors[] = "Email tidak valid";
    }
    
    if (empty($telepon) || !preg_match("/^[0-9]{10,13}$/", $telepon)) {
        $errors[] = "Nomor telepon tidak valid";
    }
    
    if (empty($institusi)) {
        $errors[] = "Institusi harus diisi";
    }
    
    if (empty($jenis_kegiatan)) {
        $errors[] = "Jenis kegiatan harus dipilih";
    }

    // If there are no errors, process the form
    if (empty($errors)) {
        // Since we're not using a database, we'll just create a response
        $response = [
            'status' => 'success',
            'message' => 'Pendaftaran berhasil!',
            'data' => [
                'nama' => $nama,
                'email' => $email,
                'telepon' => $telepon,
                'institusi' => $institusi,
                'jenis_kegiatan' => $jenis_kegiatan,
                'catatan' => $catatan
            ]
        ];
    } else {
        $response = [
            'status' => 'error',
            'message' => 'Terjadi kesalahan dalam pendaftaran',
            'errors' => $errors
        ];
    }

    // Send JSON response
    header('Content-Type: application/json');
    echo json_encode($response);
    exit;
}
?>