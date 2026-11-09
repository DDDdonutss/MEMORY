#include <iostream>
#include <string> 
using namespace std;
/*
111
bool cekLulus(int nilai){
    if (nilai >= 75)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
int main(){
    int x;
    1cout << "Masukan:";
    cin >> x;
    bool validator = cekLulus(x);
    if (validator == true)
    {
        cout << "Lulus";
    }
    else 
    {
        cout << "Tidak lulus";
    }
    return 0;
} 
222    
int hitungKuis(int x,int y){
    return x+y;
    
}
int main(){
    int angka1,angka2;
    cin >> angka1 >> angka2;
    short penjumlahan = hitungKuis(angka1,angka2);
    cout << "Total = " << penjumlahan;
    return 0;
}
333
int main(){
    int Array[2][2]={
        {5, 10}, 
        {15, 20} 
    };
    int total = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
            cout << Array[i][j]<< " ";
            total += Array[i][j];
        }
        cout << "\n";
    }
    cout << total ;
    return 0;
}
444
void tukarAngka(short &a , short &b)
{
    short temp = a;
    a = b;
    b = temp;
    swap(a,b);

}
int main()
{
    short x = 5 ;
    short y = 10;
    tukarAngka(x,y);
    cout << x << "\t" <<y;
    return 0;
}



555
void ressetArray(int array[],int batas){
    for (int i = 0; i < batas; i++){
        array[i] = 0;
    }
}
int main(){
    int array2[4] ={5, 12, 8, 20};
    ressetArray(array2,4);
    for (int i = 0; i < 4; i++)
    {
        cout << array2[i] << " ";
    }
    
    
    return 0;
}

666
void tambahLima(int array[],int batas){
    for (int i = 0; i < batas; i++)
    {
        array[i] += 5;
    }
    
}
main (){
    int nilai[]={10,20,30};
    tambahLima(nilai,3);
    for (int i = 0; i < 3; i++)
    {
        cout << nilai[i] << ' ';
    }
    return 0;
}

777    
int cariMaksimum(int array[],int batas){
    int maks = array[0];
    for (int i = 0; i < batas; i++)
    {
        if (array[i] > maks)
        {
            maks=array[i];
        }
        
    }
    return maks;
}
int main(){
    int elemen[]={12,35,67,23,89};
    int maks = cariMaksimum(elemen,5);
    cout << "Angka terbesar adalah: " << maks << "\n";
    
    return 0;
}

888
void hitungDiskon(double &harga,bool isMember){
    double discount;
    if (isMember)
    {
        harga *= 0.8;
        
    } 
    else {
        harga *= 0.95;
    }
}
int main(){
    double hargaAwal ;
    bool member;
    cin >> hargaAwal;
    cin >> member;
    hitungDiskon(hargaAwal,member);
    cout <<"Rp." << hargaAwal << member;
}

999
*/
/*
101010

EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE



void tampilkanHarga(double array[],int batas){
    for (int i = 0; i < batas; i++)
    {
        cout << i << '.' << array[i] << '\n'; 
    }
}
void tukarHarga(double &x, double &y){
    double temp = x;
    x=y;
    y=temp;
}
double hitungTotal(double array[],int batas){
    for (int i = 0; i < batas; i++)
    {
        int total = 0;
        total += array[i];
        return total;
    }
    
}
double cariTermahal (double array[], int batas){
    double maks = array[0];
    for (int i = 0; i < batas; i++)
    {
        if (maks > array[i]){
            maks = array[i];
        }
        return maks;
    }
}
int main(){
    int harga[]= {1,2,3,44,55};
    tampilkanHarga(harga,5);
    hitungTotal(harga,5);
    cariTermahal(harga,5);
    tukarHarga(harga[4],harga[0]);
    tampilkanHarga(harga,5);
    return 0;
}

*/
/*
void tampilkanHarga(double array[], int batas) {
    for (int i = 0; i < batas; i++) {
        cout << i + 1 << ". Rp." << array[i] << '\n'; 
    }
}

void tukarHarga(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
}

double hitungTotal(double array[], int batas) {
    double total = 0; // 1. Deklarasi & inisialisasi di luar loop
    for (int i = 0; i < batas; i++) {
        total += array[i];
    }
    return total; // 2. return di luar loop setelah semua dijumlahkan
}

double cariTermahal(double array[], int batas) {
    double maks = array[0];
    for (int i = 1; i < batas; i++) {
        if (array[i] > maks) { // 3. Tanda > untuk mencari yang lebih besar
        maks = array[i];
    }
}
return maks; // 4. return di luar loop setelah selesai membandingkan
}

int main() {
    // 5. Tipe data disamakan menjadi double
    double harga[5] = {150000.50, 80000.50, 250000.50, 50000.50, 100000.50};
    
    cout << "=== HARGA AWAL ===\n";
    tampilkanHarga(harga, 5);
    
    // 6. Cetak hasil return dari fungsi
    cout << "\nTotal Harga   : Rp." << hitungTotal(harga, 5) << "\n";
    cout << "Harga Termahal : Rp." << cariTermahal(harga, 5) << "\n";
    
    // Menukar elemen pertama (indeks 0) dan elemen terakhir (indeks 4)
    tukarHarga(harga[0], harga[4]);
    
    cout << "\n=== HARGA SETELAH DITUKAR ===\n";
    tampilkanHarga(harga, 5);
    
    return 0;
}
*/





