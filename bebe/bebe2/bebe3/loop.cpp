#include <iostream>
#include <math.h>
#include <string>
using namespace std;
/*
//11
int main() {
    int angka[4] = {10, 20, 30, 40};

    // Kode ini memperlihatkan pergerakan variabel 'i' di setiap putaran
    for (int i = 0; i < 4; i++) {
        cout << "Putaran loop | Nilai i = " << i 
             << " | Mengakses angka[" << i << "] = " << angka[i] << "\n";
    }

    return 0;
}
int main(){
    int array[]={100,200,3300};
    for (int i = 0; i < array[i]; i++)
    {
        cout<<"Indeks ke-"<< i << " angka:" << array[i] << endl;
    }
//22
}
int main(){
    int angka;
    cin >> angka;
    while (angka >= i)
    {
        cout << i << endl;
        angka--;
        
    }
}


//33
int main() {
    string pinBenar = "1234"; 
    string inputPin;
    
    do {
        cout << "Masukkan PIN: ";
        cin >> inputPin;
        
        if (inputPin != pinBenar) {
            cout << "PIN Salah, coba lagi!\n";
        }
    } while (inputPin != pinBenar); 
    
    cout << "Akses Diterima!\n";
    return 0;
}
//44
int main(){
    int hargaLaptop = 8000000;
    int tabungan = 0;
    int minggu = 0;
    while (tabungan != hargaLaptop)
    {
        tabungan += 500000;
        minggu++;
        cout << "Total minggu: " << minggu << '\v';
        
    }
    return 0;
}   
int main()
{
    int nilai = 2;
    do {
        cout << "Eksekusi B" << endl;
        nilai++;
    } while (nilai < 5);
    return 0;
}
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int skor=0;
    int pilihan;
    do
    {
        cout << "TOTAL: " <<skor<<endl;
        cout << "1. Brankas Kecil: Angka acak 1 - 9 \t 3 Percobaan\n";
        cout << "2. Brankas Kecil: Angka acak 10 - 99 \t 5 Percobaan\n";
        cout << "3. Brankas Kecil: Angka acak 100 - 999 \t 3 Percobaan\n";
        cout << "4. EXIT\n";
        cout << "pilih: ";
        cin >> pilihan;
        if (pilihan == 4)
        {
            cout << "BYE";
            break;
        }
    int percobaan = 0;
    int sisa_percobaan;
    int max_angka,min_angka;
        if (pilihan == 1)
        {
            min_angka =1;
            max_angka = 9;
            percobaan = 3;
        }
        if (pilihan == 2)
        {
            min_angka = 10;
            max_angka = 99;
            percobaan = 5;
        }
        if (pilihan ==3)
        {
            min_angka = 100;
            max_angka = 999;
            percobaan = 7;
        }
        int angka;
        int secret_number = (rand() % max_angka - min_angka)+1;
        while (percobaan > 0)
        {
            cout <<"Tebakan: ";
            cin >> angka;
            if (angka != secret_number)
            {
                if (angka < secret_number)
                {
                    cout << "KEcil\n";
                }
                
                else if (angka > secret_number)
                {
                    cout << "besar\n";
                }
                percobaan--;
            }
            
            if (angka == secret_number)
            {
                cout << "Benar";
                skor++;
                break;
            }
            
            if (percobaan == 0)
        {
            cout << "\nKesempatan habis! Angka rahasianya adalah: " << secret_number << "\n";
        }
        }
        

    } while (pilihan != 4);
    
}
    