const skorUjianNasional = [710, 680, 740, 595, 700]
function hitungRataRata(listSkor){
    let total = 0
    for (let i = 0 ; i < listSkor.length ; i++){
        total += listSkor[i]
    } return total / listSkor.length
} function periksaNilaiMati(listSkor){
    for (let i=0 ; i<listSkor.length ; i++){
        if ( listSkor[i] < 600){
            return false;
        }  return true
    }
} function sistemKeputusan(rataRata, statusAmbang){
    if (statusAmbang === false){
        return "STATUS: DITOLAK. Terdapat sub-test di bawah target minimal 600. Evaluasi materi fundamental!"
    } else if (statusAmbang === true && rataRata >= 680){
        return "STATUS: LOLOS UTAMA FTTM ITB! Performa stabil, amankan kursi lu!"
    } else if (statusAmbang === true && rataRata < 680){
        return "STATUS: CADANGAN. Bebas nilai mati, namun dongkrak lagi nilai rata-rata lu!"
    }
} console.log (sistemKeputusan(hitungRataRata(listSkor),periksaNilaiMati(listSkor)))