const pesertaTryout = [
    { nama: "Reyhan", kuantitatif: 720, inggris: 650 },
    { nama: "Farrel", kuantitatif: 610, inggris: 690 },
    { nama: "Fahmi", kuantitatif: 750, inggris: 700 },
    { nama: "Alek", kuantitatif: 680, inggris: 640 }
];
function hitungSkor(listPeserta){
    let ListHasilTransformasi = []
    for (let i=0 ; i<listPeserta.length ; i++){
        let skorAkhir = (listPeserta[i].kuantitatif *  0.6) +  (listPeserta[i].inggris * 0.4)
        let newData = { 
            namaSiswa: listPeserta[i].nama, 
            totalSkor: skorAkhir 
        }    
        ListHasilTransformasi.push(newData)
    } return ListHasilTransformasi;
} 
    function tampilkanLeaderboard(listHasil){
    let barisTeks = [];
    for (let i=0 ; i<listHasil.length ; i++){
   let teks = (i + 1) + ". " + listHasil[i].namaSiswa + " (" + listHasil[i].totalSkor + ")"
        barisTeks.push(teks)       
} return barisTeks.join("\n");
} console.log(tampilkanLeaderboard(hitungSkor(pesertaTryout)))
console.log(pesertaTryout[1].kuantitatif)