function evaluasiSkor(skorKamu, pilihanJurusan) {
    // Gerbang Utama 1: Menyaring jika targetnya FTTM
    if (pilihanJurusan === 'FTTM') {
        if (skorKamu >= 680) {
            // Sub-Kondisi A (Lulus)
            console.log("Selamat! Skor kamu " + skorKamu + " AMAN untuk FTTM ITB.");
        } else {
            // Sub-Kondisi B (Gagal) -> Langsung pakai else seperti diskusi kita
            var selisih = 680 - skorKamu;
            console.log("Skor kurang " + selisih + " poin lagi untuk FTTM. Kejar fisiknya, jangan kasih kendor!");
        }
    } 
    // Gerbang Utama 2: Menyaring jika targetnya STEI
    else if (pilihanJurusan === 'STEI') {
        if (skorKamu >= 700) {
            // Sub-Kondisi A (Lulus)
            console.log("Luar biasa! Skor " + skorKamu + " lolos passing grade STEI ITB.");
        } else {
            // Sub-Kondisi B (Gagal)
            var selisih = 700 - skorKamu;
            console.log("Skor kurang " + selisih + " poin lagi untuk STEI. Evaluasi lagi materi yang salah!");
        }
    } 
    // Gerbang Cadangan: Jika input jurusan ngawur
    else {
        console.log("Jurusan tidak terdaftar dalam sistem evaluasi.");
    }
}

// ==========================================
// TAHAP PENGUJIAN (Uji 3 Skenario Sekaligus)
// ==========================================

// 1. Uji skenario FTTM Lulus
evaluasiSkor(690, 'FTTM'); 
// Output: Selamat! Skor kamu 690 AMAN untuk FTTM ITB.

// 2. Uji skenario STEI kurang poin (Otomatis hitung selisih: 700 - 650 = 50)
evaluasiSkor(650, 'STEI'); 
// Output: Skor kurang 50 poin lagi untuk STEI. Evaluasi lagi materi yang salah!

// 3. Uji skenario salah input jurusan
evaluasiSkor(600, 'Kedokteran'); 
// Output: Jurusan tidak terdaftar dalam sistem evaluasi.