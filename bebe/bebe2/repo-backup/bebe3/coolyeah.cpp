#include <iostream>
using namespace std;
/*
int main(){
    int angka = 10;
    if (angka >=10){
        printf("benar");
    } else {
        printf("salah");
    }
    return 0;
}
*/
//LATIHAN 1 CPP

/*
int main(){
    int ujian;
    cout << "Nilai(0-100): ";
    cin >> ujian;
    if (ujian >= 85)
    {
        cout << 'A' << endl;
    } else if (ujian >= 70)
    {
        cout << 'B'<< endl;
    } else if (ujian >= 50)
    {
        cout << 'C'<< endl;
    }
    else {
        cout << 'D'<< endl;
    }
return 0;
}
/*
//LATIHAN 3 CPP
int main(){
    int angka;
    cout << "ANGKA: ";
    cin >> angka;
    if (angka == 0)
    {
        cout << "NOL";
    }
    else if (angka > 0)
    {
        cout << "POSITIF";
    }
    else 
    {
        cout << "NEGATIF";
    }
    return 0;
}
int main() {
    int batas;
    cout << "Masukkan BATAS: ";
    cin >> batas;
    int baris = 1;
    int kolom = 1;
    for (int i = 1; baris <= batas; i++) {
        if (kolom <= baris) {
            cout << kolom * 2 << " ";
            kolom++;
        } else {
            cout << endl;
            baris= baris + 1;
            kolom = 1;
        }
    }
    
    return 0;
}


int main()
{
    int batas;
    int jumlahkan = 0;
    cin >> batas;
    for (int i = 1; i <= batas; i++){
        if (i % 2 == 1){
            jumlahkan = jumlahkan + i;
            cout << i << '+';
        }
    }
    cout << ':' <<jumlahkan << ' ';
    int faktorial = 1;
    for (int i = 1; i < jumlahkan; i++)
    {
        faktorial *= i;
        cout << i << 'x';
    }
    cout << ':' <<faktorial ;
    
    return 0;   
}
*/
    
    
    

    
    /*
    int main() {
        int batasAngka;
        int penjumlahan = 0; 
        cout << "Masukkan batas: ";
        cin >> batasAngka;
        cout << "Proses Penjumlahan Genap: ";
        for (int i = 2; i <= batasAngka; i++) {
            if (i % 2 == 0) {
                penjumlahan =penjumlahan + i; 
                cout << i; 
                if (i + 2 <= batasAngka) { 
                    cout << " + "; 
                } else {
                    cout << " = " << penjumlahan; 
                }
            }
        }
        int kuadrat = penjumlahan * penjumlahan;
        cout << endl << "Hasil Kuadrat =" << penjumlahan <<  kuadrat << endl;
        
        return 0;
    }
    
    
    
    */
//latihan 1    
/*
    int main(){
        int angka = 50;
        
        for (int i= 0; i <= angka; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
        }
        cout<<' ';
    }
    
}
*/
/* 
//latihan 2
int main(){
    int angka;
    int total = 0;
    int i = 0 ;
    cin >> angka;
    while (i <= angka)
    {
        total += i;
        cout << i;
        cout << '+';
        i++;
    }
    cout <<'='<<total<<endl;
    
}
int main(){
    int angka;
    int min=0;
    
    for (int i = 0; i <= 5; i++)
    {
        cout << "nilai: ";
        cin >> angka;
        if (min < angka)
        {
            min = angka;
            
        }   
        cout << angka<< endl; 
        
}
return 0;
}
*/
#include <iostream>
#include <cstdlib> // Menyediakan fungsi rand() dan srand()
#include <ctime>   // Menyediakan fungsi time()

using namespace std;

int main() {
    srand(time(0));

    int pilihan = 0;
    int skor = 0;

    do {  
        cout << "Pilih Tingkat Kesulitan:\n";
        cout << "1. Mudah  (1 - 50,  10 Percobaan)\n";
        cout << "2. Sedang (1 - 100,  7 Percobaan)\n";
        cout << "3. Sulit  (1 - 200,  5 Percobaan)\n";
        cout << "4. Exit   (Keluar dari Game)\n";
        cout << "Skor Anda: " << skor << "\n\n";
        cout << "Pilihan Anda (1-4): ";
        cin >> pilihan;

        if (pilihan == 4) {
            cout << "\nBYE" << skor << "\n";
            break; // Keluar dari loop utama
        }

  
        int max_angka = 0;
        int max_percobaan = 0;

        // CONDITIONAL STATEMENT: Menentukan aturan sesuai level
        if (pilihan == 1) {
            max_angka = 50;
            max_percobaan = 10;
        } else if (pilihan == 2) {
            max_angka = 100;
            max_percobaan = 7;
        } else if (pilihan == 3) {
            max_angka = 200;
            max_percobaan = 5;
        }   

        // GENERATE ANGKA ACAK (1 sampai max_angka)
        int angka_rahasia = (rand() % max_angka) + 1;
        int sisa_percobaan = max_percobaan;
        int tebakan = 0;
        bool tebakan_benar = false;

        cout << "Game Dimulai! Tebak angka antara 1 - " << max_angka << "\n";
        

        // LOOP SESI TEBAKAN (while): Berjalan selama percobaan masih ada
        while (sisa_percobaan > 0) {
            cout << "\n[Sisa Percobaan: " << sisa_percobaan << "] Masukkan tebakan: ";
            cin >> tebakan;

            // CONDITIONAL STATEMENT: Memeriksa tebakan
            if (tebakan == angka_rahasia) {
                cout << "Selamat! Tebakan Anda BENAR!\n";
                skor++; // Skor bertambah jika berhasil menebak
                tebakan_benar = true;
                break; // Hentikan loop tebakan, kembali ke menu utama
            } else if (tebakan < angka_rahasia) {
                cout << "Tebakan Anda terlalu KECIL!";
            } else {
                cout << "Tebakan Anda terlalu BESAR!";
            }

            sisa_percobaan--; // Mengurangi sisa percobaan
        }

        // CONDITIONAL STATEMENT & OPERATOR 'NOT' (!): Jika tebakan gagal/habis percobaan
        if (tebakan_benar == false) {
            cout << "\n\nKesempatan habis! Angka rahasianya adalah: " << angka_rahasia << "\n";
            cout << "Skor tidak bertambah. Kembali ke pemilihan permainan...\n";
        }

    } while (pilihan != 4); // Loop berlanjut selama pemain tidak memilih 4 (Exit)

    return 0;
}


