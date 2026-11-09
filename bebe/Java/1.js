const riwayatTryOut = [620,680,710,640,695,720]

function analisisProgress(listSkor) {
    let jumlahLolos = 0
    for (let i=0 ; i < listSkor.length ; i++) {
        let asep = listSkor[i]
        if (asep >=680 ) {
            console.log("Tryout ke-" + (i + 1) + ": Lolos Target")
        }   else {
             console.log("Tryout ke-" + (i + 1) + ": Belum Lolos") 
            } 
        }
        console.log("-----------------------------------------")
         if (jumlahLolos >= 4) {
            console.log("Hasil akhir: Progress bagus! Kamu lolos target sebanyak " + jumlahLolos + " kali.")
         }  else {
            console.log("Hasil akhir: Evaluasi lagi materi lemahmu. Baru lolos " + jumlahLolos + " kali. Kejar terus!")
         }
        }
        
analisisProgress(riwayatTryOut);    