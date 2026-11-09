const skorTryout = [650,680,720,660,690]
function hitungRataRata(listSkor){
    let total = 0;
    for (let i=0;i<listSkor.length;i++){
    total += listSkor[i];
}
    return total / listSkor.length
}

function cekPeluang(nilaiRataRata){
    if(nilaiRataRata >= 690){
        return "Peluang Sangat Tinggi (Zona Aman FTTM ITB)"
    } if (nilaiRataRata >= 660 && nilaiRataRata <= 690){
        return "Peluang Sedang (Tingkatkan Konsistensi Belajar)"
        } else {
         return "Peluang Rendah (Butuh Evaluasi Total Materi UTBK)"
    }
}
const rataRataSaya = hitungRataRata(skorTryout);
const statusPeluang = cekPeluang(rataRataSaya)  
console.log("Rata-rata Skor UTBK: " + rataRataSaya);
console.log("Status Kelulusan: " + statusPeluang);


