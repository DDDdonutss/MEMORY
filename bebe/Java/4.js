const nilaiUtbkSaya = [690, 640, 710, 680];
function validasiFttm(listNilai){
    let total = 0 
    for (let i=0 ; i<listNilai.length ; i++) {
        total += (listNilai[i] / listNilai.length)
    }    let nilaiKuantitatif = listNilai[1]
       if (total >= 675 && nilaiKuantitatif >= 650) {
        return true;
    }   else {
        return false;
    }
} function cetakPengumuman(statusKelulusan){
    if (statusKelulusan === true){
        return "SELAMAT! Anda memenuhi syarat dan Lolos Seleksi FTTM ITB.";
    }  else {
        return "MAAF. Anda belum lolos. Rata-rata atau Nilai Kuantitatif Anda masih di bawah ambang batas.";
}
}
const cekHasil = validasiFttm(nilaiUtbkSaya);
const suratResmi = cetakPengumuman(cekHasil);
console.log(cekHasil)
console.log(suratResmi);
//or
//const suratResmi = cetakPengumuman(validasiFttm(nilaiUtbkSaya));
//console.log(suratResmi);
