const pendaftarFTTM = [
    { nama: "Reyhan", mtk: 780, fisika: 720 },
    { nama: "Alek", mtk: 650, fisika: 680 },
    { nama: "Fahmi", mtk: 820, fisika: 800 },
    { nama: "Farrel", mtk: 750, fisika: 790 },
    { nama: "Danu", mtk: 610, fisika: 630 }
];
function hitungDanUrutkan(listPeserta){
    for(let i=0;i<listPeserta.length;i++){
        listStatus = listPeserta[i].mtk + listPeserta[i].fisika
    } return listPeserta.sort((a,b)=>b.totalSkor - a.totalSkor)
}
function statusPeserta(listTerurut,kuotaUtama){
    let hasil=[]
    for (let i=0;i<listTerurut.length;i++){
        let status = (i<kuotaUtama) ?'lolos':'Cadangan'
       listStatus[i]=status
        hasil.push(listStatus[i])
    } return hasil
}
function cetakLaporan(listEvaluasi){
    let board=[]
    for(let i=0;i<listEvaluasi.length;i++){
        let teks = (i + 1 + '. ') + listEvaluasi[i].nama + ' - Total Skor: ' + listEvaluasi[i].totalSkor + ' | Status: ' + listEvaluasi[i].status;
        board.push(teks);
    } return board.join('\n');
} 
const papa = hitungDanUrutkan(pendaftarFTTM)
const mama = statusPeserta(papa,3)
console.log('PASSING GRADE YANG LULUS')
console.log(cetakLaporan(mama)) 