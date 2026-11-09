const daftarAngka = [1,2,3,4,5,6,7,8,9,10];
function tebakanAngka(angka) {
    if (angka > daftarAngka[3]){
        console.log('Kebesaran');
    }    else if (angka < daftarAngka[3]) {
        console.log('Kekecilans')
    } else {
        console.log('Sukses')
    }
}
tebakanAngka(4);