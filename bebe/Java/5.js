const riwayatTryoutAcak = [ 695, 720, 600]
function saringSkorElite(listSkor){
    let wadahElite = [];
    for (let i=0 ; i<listSkor.length ; i++){
        let memeriksa = listSkor[i]
        if (memeriksa >= 680){
            wadahElite.push(listSkor[i]);
        }
    } return wadahElite;
} function hitungRataRata(listSkorSaringan){
    if (listSkorSaringan.length === 0){
        return 0
    }   else {
        let total = 0
        for (let i = 0; i < listSkorSaringan.length; i++) {
            total += listSkorSaringan[i];
        }
        return total / listSkorSaringan.length;
}
}
const rataRataEliteSaya = hitungRataRata(saringSkorElite(riwayatTryoutAcak))
console.log("Rata-rata Skor Elit Kamu: " + rataRataEliteSaya)