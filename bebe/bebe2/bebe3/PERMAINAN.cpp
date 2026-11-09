#include <iostream>
#include <random>
using namespace std;
/*
int main(int argc, char const *argv[])
{
    int mode;
    int chanceeeeeeeeeee = 0;
    int kemakmuran = 100;
    int shhhh;
    do
    {
        cout << "PILIH LEVEL GAMBLING\nTOTAL KEMAKMURAN: " << kemakmuran << endl;
        cout << "1.Meja Perunggu\n2.Meja Perak\n3.Meja Emas\n4.EXIT\n";
        cin >> mode;
        if (mode == 1)
        {
            kemakmuran -= 10;
            shhhh = (rand()%15)+1;
            chanceeeeeeeeeee = 4;
            
        }   
        else if (mode == 2)
        {
            kemakmuran -= 20;
            shhhh = (rand()%50)+1;
            chanceeeeeeeeeee = 4;
        }   
        else if (mode == 3)
        {
            kemakmuran -= 30;
            shhhh = (rand()%100)+1;
            chanceeeeeeeeeee = 4;
        }
        else 
        {
            break;
        }
        
        while (chanceeeeeeeeeee > 0)
        {
            int gambling;
            cout << " Masukkan Nilai: ";
            cin >> gambling;
            if (gambling == shhhh)
            {
                if (mode == 1)
                {
                    kemakmuran += 30;
                    chanceeeeeeeeeee--;
                    
                }   
                else if (mode == 2)
                {
                    kemakmuran += 60;
                    chanceeeeeeeeeee--;
                }   
                else if (mode == 3)
                {
                    kemakmuran += 100;
                    chanceeeeeeeeeee--;
                }    
                break;
            }
            else
            {
                chanceeeeeeeeeee--;
                if (gambling < shhhh)
                cout << "TERLALU KEEECCCIIILLLL\n";
                else
                cout << "TERLALU BESARRRRRRRRR\n";
            }
        } 
    }   while (kemakmuran > 0);
    
}







int main() {
    int jumlah_baris = 10; // Mau berapa baris
    
    for (int i = 1; i <= jumlah_baris; i++) {
        
    int angka = i * 2; 
    
    
    for (int j = 1; j <= i ; j++) {
        cout << angka << "\t"; 
        angka += 2;         
    }
    
    cout << endl; 
    
    return 0;
}

*///erorrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr
/*
int main(int argc, char const *argv){
    do
    {
        int total =0;
        cout<<"Code 1 : Buku Tulis — Rp8.000\n";
        cout<<"Code 2 : Pensil — Rp3.000\n";
        cout<<"Code 3 : Penghapus — Rp2.000\n";
        cout<<"Code 4 : Selesai & Hitung Total\n";
        int pilih;
        double diskontol = 0;
        while (total <= 20){
            
        cout << "Pilih: ";
        cin >> pilih;
        if (pilih < 1 || pilih > 4)
        {
            break;
        }   
        if (pilih == 1)
        {
            total+=8;
        }
        if (pilih == 2)
        {
            total += 3;
        }
        if (pilih == 3)
        {
            total+=2;
        }
        
    } if (pilih == 4)
    {
        cout<<"total: "<< total << endl << diskontol;
    }
    
    
    */
/*
   

} while ( == 4);

return 0;

}

*/
#include <iostream>
using namespace std;

int main() {
    int pilih;
    int total = 0; // Wajib diisi 0 di awal!

    // Cukup 1 loop do-while untuk mengulang menu
    do {
        cout << "\n=== TOKO ATK SEJAHTERA ===\n";
        cout << "1. Buku Tulis  (Rp8.000)\n";
        cout << "2. Pensil      (Rp3.000)\n";
        cout << "3. Penghapus   (Rp2.000)\n";
        cout << "4. Selesai\n";
        cout << "Pilih barang (1-4): ";
        cin >> pilih;

        // Cek pilihan menu
        if (pilih == 1) {
            total += 8000;
            cout << "Buku Tulis ditambahkan!\n";
        } else if (pilih == 2) {
            total += 3000;
            cout << "Pensil ditambahkan!\n";
        } else if (pilih == 3) {
            total += 2000;
            cout << "Penghapus ditambahkan!\n";
        } else if (pilih == 4) {
            cout << "Menghitung total pembayaran...\n";
        } else {
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilih != 4); // Ulangi terus SELAMA pilihan BUKAN 4

    // Hitung Diskon setelah loop selesai
    double diskon = 0;
    if (total >= 20000) {
        diskon = total * 0.10; // Diskon 10% jika total >= 20000
    }

    double total_bayar = total - diskon;

    // Tampilkan Rincian
    cout << "\n=== RINCIAN PEMBAYARAN ===\n";
    cout << "Total Awal  : Rp" << total << endl;
    cout << "Diskon      : Rp" << diskon << endl;
    cout << "Total Bayar : Rp" << total_bayar << endl;

    return 0;
}