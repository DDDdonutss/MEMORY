const databasePendaftar = [
    [690, 660],
    [640, 600], 
    [710, 680], 
    [675, 630] 
];
function prosesSeleksiMassal(matriksData){
    let pendaftarLolos = [];
    for (let i=0 ; i < matriksData.length ; i++){
        let rataRata = matriksData[i][0];
        let kuantitatif = matriksData[i][1];
    if (rataRata >=680 && kuantitatif >= 650){
        pendaftarLolos.push(i+1)
        
    }
    } return pendaftarLolos;
} function umumkanHasil(arrayIndeks){
        return "SISTEM DETEKSI: Seleksi Selesai. Total pendaftar yang lolos kualifikasi FTTM ITB sebanyak " + arrayIndeks.length + " orang. Yaitu pendaftar nomor urut: " + arrayIndeks;
    }
console.log( umumkanHasil( prosesSeleksiMassal(databasePendaftar) ) );