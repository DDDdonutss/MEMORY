const daftarHargaIEM = [400000, 800000, 1500000, 3000000, 5000000]
function cekHarga(listHarga,maxBudget) {
        for (var i=0 ; i<listHarga.length ; i++) {
            var hargaSekarang=listHarga[i]
               if (hargaSekarang <= maxBudget){
                console.log("IEM seharga Rp " + listHarga[i] + " MASUK BUDGET. Sikat!")
                 }  else{
                    console.log("IEM seharga Rp " + listHarga[i] + " KEMAHALAN. Skip dulu.")
                 } 
        }
    }
    cekHarga(daftarHargaIEM,2000000);