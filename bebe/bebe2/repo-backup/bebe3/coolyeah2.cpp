#include <iostream>
#include <string>
using namespace std;

/*
int AQI,Kelembapan;
string status[7]=
{"Aman","Sedang","lembap","Tidak Sehat",
"Sangat Tidak Sehat","Berbahaya"};
int main(){
    cout << "Perkiraan AQI: ";
    cin >> AQI;
    cout <<"Perkiraan Kelembapan: ";
    cin >> Kelembapan;
    if (AQI < 0 ||Kelembapan < 0)
    {
        cout << "invalid";
    }
    
    else if (AQI >= 300)
    {
        cout <<status[5];
    }
    else if (AQI >= 201)
    {
        cout <<status[4];
        
    }
    else if (AQI >= 101 )
    {
        cout <<status[3];
        
    }
    else if (AQI >= 51 && Kelembapan >=70)
    {
        cout <<status[2];
    }
    else if (AQI >= 51)
    {
        cout << status[1];
    }
    
    else {
        cout << status[0];
    }
    
return 0;
}
*/
int main(){
    int tanggalLahir, bulanLahir;
    
    cout << "Masukkan tanggal lahir (1-31): ";
    cin >> tanggalLahir;
    cout << "Masukkan bulan lahir (1-12): ";
    cin >> bulanLahir;
    
    if (bulanLahir < 1 || bulanLahir > 12 || tanggalLahir < 1 || tanggalLahir > 31) {
        cout << "Input tanggal atau bulan error";
    } 
    else if ((bulanLahir == 12 && tanggalLahir >= 22) || (bulanLahir == 1 && tanggalLahir <= 19)) {
        cout << "Zodiak: Capricorn";
    } 
    else if ((bulanLahir == 1 && tanggalLahir >= 20) || (bulanLahir == 2 && tanggalLahir <= 18)) {
        cout << "Zodiak: Aquarius";
    } 
    else if ((bulanLahir == 2 && tanggalLahir >= 19) || (bulanLahir == 3 && tanggalLahir <= 20)) {
        cout << "Zodiak: Pisces";
    } 
    else if ((bulanLahir == 3 && tanggalLahir >= 21) || (bulanLahir == 4 && tanggalLahir <= 19)) {
        cout << "Zodiak: Aries";
    } 
    else if ((bulanLahir == 4 && tanggalLahir >= 20) || (bulanLahir == 5 && tanggalLahir <= 20)) {
        cout << "Zodiak: Taurus";
    } 
    else if ((bulanLahir == 5 && tanggalLahir >= 21) || (bulanLahir == 6 && tanggalLahir <= 20)) {
        cout << "Zodiak: Gemini";
    } 
    else if ((bulanLahir == 6 && tanggalLahir >= 21) || (bulanLahir == 7 && tanggalLahir <= 22)) {
        cout << "Zodiak: Cancer";
    } 
    else if ((bulanLahir == 7 && tanggalLahir >= 23) || (bulanLahir == 8 && tanggalLahir <= 22)) {
        cout << "Zodiak: Leo";
    } 
    else if ((bulanLahir == 8 && tanggalLahir >= 23) || (bulanLahir == 9 && tanggalLahir <= 22)) {
        cout << "Zodiak: Virgo";
    } 
    else if ((bulanLahir == 9 && tanggalLahir >= 23) || (bulanLahir == 10 && tanggalLahir <= 22)) {
        cout << "Zodiak: Libra";
    } 
    else if ((bulanLahir == 10 && tanggalLahir >= 23) || (bulanLahir == 11 && tanggalLahir <= 21)) {
        cout << "Zodiak: Scorpio";
    } 
    else if ((bulanLahir == 11 && tanggalLahir >= 22) || (bulanLahir == 12 && tanggalLahir <= 21)) {
        cout << "Zodiak: Sagittarius";
    } 
    else {
        cout << "tanggal lahir ngawur";
    }
    
    return 0;
}
