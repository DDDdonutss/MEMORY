const databaseTryout = [
    { nama: "Reyhan", skorUtbk: 710 },
    { nama: "Farrel", skorUtbk: 640 },
    { nama: "Fahmi", skorUtbk: 730 },
    { nama: "Alek", skorUtbk: 675 }
];
function saringPendaftarElite(listPendaftar){
    let subject =[]
    for (i=0 ; i < listPendaftar.length ; i++){
        if (listPendaftar[i].skorUtbk >= 680){
            subject.push(listPendaftar[i].nama);
        }
    } return subject
} function buatLaporanResmi(arrayNama){
    return "PENGUMUMAN SELEKSI: Selamat kepada pendaftar yang lolos FTTM ITB: " + arrayNama.join(",") + ". Segera lakukan registrasi ulang!"
} console.log(buatLaporanResmi(saringPendaftarElite(databaseTryout)));