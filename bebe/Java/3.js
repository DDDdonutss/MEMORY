const nilaiSubTest =[690, 640, 710, 620];
function hitungSubtestLemah(listNilai){
    let jumlahLemah = 0
    for (let i=0 ; i < listNilai.length ; i++){
        if (listNilai[i] < 670){
            jumlahLemah++ 
        }
    } return jumlahLemah
}
function tentukanStrategiBelajar(totalLemah){
    if ( totalLemah === 0){
        return "Strategi: Semua sub-test aman! Fokus simulasi manajemen waktu ujian."
    } if ( totalLemah === 1 || totalLemah === 2) {
        return "Strategi: Kelemahan minor. Gempur latihan soal (drilling) khusus pada sub-test yang lemah!"
    } if ( totalLemah > 2) {
        return "Strategi: Evaluasi besar! Kamu harus review ulang konsep dasar materi fundamental."
    }
} 
const jumlahKelemahanSaya = hitungSubtestLemah(nilaiSubTest);
const rekomendasiTaktis = tentukanStrategiBelajar(jumlahKelemahanSaya);
    console.log("Jumlah sub-test di bawah target: " + jumlahKelemahanSaya);
    console.log(rekomendasiTaktis);
