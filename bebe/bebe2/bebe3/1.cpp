#include <iostream>
#include <string> 
using namespace std;
/*
111
int main() {
   const int KKM = 75;
    // TODO 1: Buat variabel konstanta bernama KKM (tipe data integer) dengan nilai 75 [2, 4]
    string namaSiswa = "Budi";
    // TODO 2: Buat variabel string bernama namaSiswa dengan nilai awal "Budi" [4]
    namaSiswa.at(0) = 'D';
    // TODO 3: Ubah karakter pertama pada namaSiswa menjadi 'D' agar namanya berubah menjadi "Dudi" [1, 6]
    cout << namaSiswa;
    // TODO 4: Cetak tulisan: "Siswa: [namaSiswa]" lalu buat baris baru, 
    //         kemudian di baris berikutnya cetak: "KKM: [KKM]" [3, 7]
  
    
    return 0;
}
    222
    int main() {
    // TODO 1: Deklarasikan tiga variabel integer sekaligus dalam satu baris: 
    //         buku = 10, pena = 15, dan pensil = 20
    int buku = 10, pena = 15 , pensil =20;
    // TODO 2: Deklarasikan variabel konstanta bertipe double bernama 'hargaBuku' dengan nilai 15.75 
    double hargaBuku = 15.75;    
    // TODO 3: Deklarasikan variabel boolean bernama 'tokoBuka' bernilai true
    bool tokoBuka = true;
    
    // TODO 4: Cetak nilai variabel 'tokoBuka' (ingat, C++ akan mencetak angka 1 untuk true)
    //         lalu cetak total jumlah alat tulis (buku + pena + pensil)
    cout << "Status Toko Buka: " << tokoBuka << "\n";
    cout << "Total Alat Tulis: " <<  buku + pena + pensil << "\n";
    
    return 0;
}


333
int main() {
    // TODO 1: Deklarasikan variabel string bernama 'namaBarang'
    //         dan dua variabel integer sekaligus: 'jumlah' dan 'hargaSatuan'
    string namaBarang = "Baju";
    int jumlah,hargaSatuan;
    // TODO 2: Minta pengguna memasukkan nama barang, jumlah, dan harga
    
    cout << "Masukkan nama barang: ";
    cin >> namaBarang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;   
    cout << "Masukkan harga satuan: ";
    cin >> hargaSatuan;
    
    // TODO 3: Buat variabel integer bernama 'totalHarga' 
    int total = jumlah*hargaSatuan;
    //         yang nilainya adalah hasil perkalian 'jumlah' dan 'hargaSatuan'
    cout << "Total:" << namaBarang << " Rp." << total; 
    
    // TODO 4: Tampilkan total pembayaran dengan format:
    //         "Total bayar [namaBarang]: Rp [totalHarga]"
    
    
    return 0;
} 


444
Pengguna memasukkan totalBelanja.

Jika totalBelanja >= 100000, berikan diskon sebesar 10% dari total belanja.

Jika totalBelanja >= 50000 (dan kurang dari 100.000), berikan diskon sebesar 5% dari total belanja.

Jika di bawah 50.000, diskon 0%.

Hitung totalBayar yaitu totalBelanja - jumlahDiskon.


 
int main() {
    double totalBelanja;
    double jumlahDiskon = 0;
    double totalBayar;

    cout << "Masukkan total belanja: Rp ";
    cin >> totalBelanja;

    if (totalBelanja >= 100000) {
        jumlahDiskon = 0.10 * totalBelanja;
    } else if ( totalBelanja >= 50000) {
        jumlahDiskon = 0.05 * totalBelanja;
    } else {
        jumlahDiskon = 0;
    }
    cout << "Potongan Diskon : Rp " << jumlahDiskon << "\n";
    cout << "Total Pembayaran: Rp " << totalBelanja - jumlahDiskon << "\n";

    return 0;

555
int main(){
    int bilanganBulatPositif; 
    int totalPenjumlahan = 0;

    cout << "Masukkan batas Bil.Bul Positif: ";
    cin >> bilanganBulatPositif;
    cout << "Deret angka: ";
    for (int i= 0; i <= bilanganBulatPositif ; i++)
    {
        totalPenjumlahan += i;
    }
    cout << "\nTotal penjumlahan: " << totalPenjumlahan << "\n";
    return 0;
   
666
int main(){
    int angka,perkalian;
    cout << "Batas Angka:";
    cin >> angka;
    for (int i = 0; i < angka; i++)
    {
        perkalian *= i; 
    }
    cout << "tabel :" << perkalian << "\n";
    
} 
777
int main() {
    int angka;
    cout << "Masukkan Angka Perkalian: ";
    cin >> angka;
    cout << " Tabel Perkalian " << angka << "\n";
    
    for (int i = 0; i <= 10; i++) {
        cout << angka << " x " << i << " = " << (angka * i) << "\n";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Masukkan batas angka (N): ";
    cin >> N;
    for (int i = 0 ; i <= N ; i++ ) {
        
    if ( i % 2 == 0) {
        cout << i << " adalah GENAP\n";
    } else {
        cout << i << " adalah GANJIL\n";
    }
    
}

return 0;
}

int main() {
    // Array berisi 4 nilai ujian
    int nilai[4] = {80, 70, 90, 100};
    int total = 0;
    
    cout << "Daftar Nilai Ujian:\n";
    
    for (int i =0 ;i < 4 ;i++ ) {
        
    cout << "Nilai ke-" << (i + 1) << ": " << nilai[i]<< "\n";
    total += nilai[i];
}

double rataRata = (double) total / 4;

cout << "---------------------\n";
cout << "Total Nilai: " << total << "\n";
cout << "Rata-rata  : " << rataRata << "\n";

return 0;
}

#include <iostream>
using namespace std;

int main() {
    
int member[5];

cout << "Masukkan 5 angka bebas:\n";
for (int i = 0; i < 5; i++) {
    cout << "Angka ke-" << (i + 1) << ": ";
    cin >> member[i];
}
int min = member[0];
for (int i = 1; i < 5; i++) {
    if (member[i] < min) { 
        min = member[i];   
    }
}
cout << "-----------------------\n";
cout << "Nilai terkecil adalah: " << min << "\n";

return 0;
}
int main(){
    int angka[6]; 
    int validator = 0;
    cout << "Masukan angka:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Urutan:"<< (i+1) <<".";
        cin >> angka[i] ;
        if (angka[i] > 50)
        { 
            validator++;
        }
        
    }
    cout << "-----------------------\n";
    cout << "Banyaknya angka yang > 50: " << validator << " angka.\n";
    
    */
  
   
