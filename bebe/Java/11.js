const hasilTryoutBerbobot = [
    { namaSiswa: "Reyhan", totalSkor: 692 },
    { namaSiswa: "Farrel", totalSkor: 642 },
    { namaSiswa: "Fahmi", totalSkor: 730 },
    { namaSiswa: "Alek", totalSkor: 664 }
];
function rankingPeserta(listData){
    return listData.sort((a, b) => b.totalSkor - a.totalSkor);
    
} function saringBerdasarkanKuota(listTerurut, kuotaKualifikasi){
    let pesertaLolosKuota = [];
    for (let i=0 ; i<kuotaKualifikasi ; i++){
        if ( listTerurut[i] === undefined){
            break;
        }
        pesertaLolosKuota.push(listTerurut[i]);
    } return pesertaLolosKuota 

} function cetakHasilSaringan(listFinal){
    let newData = []
    for (let i=0 ; i<listFinal.length ;i++){
   let teks = (i + 1) + ". " + listFinal[i].namaSiswa + " (" + listFinal[i].totalSkor + ")" 
   newData.push(teks)
    } return newData.join('\n')

}const dataTerurut = rankingPeserta(hasilTryoutBerbobot);
const dataLolos = saringBerdasarkanKuota(dataTerurut, 2);
console.log("=== DAFTAR PESERTA LOLOS KUOTA FTTM ITB ===");
console.log(cetakHasilSaringan(dataLolos));