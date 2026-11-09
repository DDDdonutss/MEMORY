const skorMateriUtbk = [680,620,690]
function cariSkorTertinggi(listSkor){
    let tertinggi = listSkor[2]
    for (i =0 ; i < listSkor.length ; i++){
        if (listSkor[i] > tertinggi){
            tertinggi = listSkor[i]
        }
    } return tertinggi
} function analisisPotensiPuncak(skorTertinggi){
    if (skorTertinggi >= 720){
        return "Analisis: Luar biasa! Skor puncakmu sudah menyentuh standar aman FTTM ITB. Pertahankan konsistensinya!";
    } else {
        return "Analisis: Potensi puncak bagus, tapi belum aman sepenuhnya. Gempur latihan materi andalanmu ini agar tembus kepala 750!";
    }
} console.log( analisisPotensiPuncak( cariSkorTertinggi(skorMateriUtbk) ) );
console.log(cariSkorTertinggi(skorMateriUtbk))