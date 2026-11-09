const pesertaOlimpiade = [
    { nama: "Reyhan", skorTKA: 710 },
    { nama: "Alek", skorTKA: 760 },
    { nama: "Fahmi", skorTKA: 690 },
    { nama: "Farrel", skorTKA: 800 }
];
function urutanSkor(listSkor){
    return listSkor.sort((a,b)=>b.skorTKA - a.skorTKA)
    }
function penyaring(listData,limit){
    let sesuatu = []
    for (let i=0 ; i<limit; i++){
        if (listData[i]===undefined){
            break;
        }   sesuatu.push(listData[i])
    }   return sesuatu
}
function laporan(Final){
    let board = []
    for (let i=0 ; i<Final.length ; i++){
        let teks = (i+1) + Final[i].nama + '=' + Final[i].skorTKA
        board.push(teks)
    } 
    return board.join('\n')
} 
const a = urutanSkor(pesertaOlimpiade)
const b = penyaring(a,3)
console.log('===TIM UTAMA OLIMPIADE FTTM ===')
console.log(laporan(b))