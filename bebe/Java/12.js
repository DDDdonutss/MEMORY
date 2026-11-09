const kandidatBeasiswa = [
    { nama: "Fahmi", skorFisika: 780 },
    { nama: "Alek", skorFisika: 690 },
    { nama: "Farrel", skorFisika: 810 },
    { nama: "Reyhan", skorFisika: 740 }
];
function urutkanKandidat(listData){
    return listData.sort((a,b)=>b.skorFisika - a.skorFisika)
}
function pangkasKuotaBeasiswa(listTerurut, jumlahKuota){
    let penerimaSah = []
    for (let i=0 ; i<jumlahKuota ; i++){
        if (listTerurut[i] === undefined){
            break
        } 
        penerimaSah.push(listTerurut[i])
    } return penerimaSah
}
function formatPengumumanResmi(listFinal){
    let wadah = []
    for (let i=0 ; i<listFinal.length ;i++){
        let teks = (i+1+'.') + listFinal[i].nama + ' lulus beasiswa dengan skor:' + listFinal[i].skorFisika
        wadah.push(teks)
    } return wadah.join('\n')
    
}console.log(formatPengumumanResmi(pangkasKuotaBeasiswa(urutkanKandidat(kandidatBeasiswa),6)))