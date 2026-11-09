#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int nilai_mahasiswa;
    int total_nilai = 0;
    int i=0;
    bool batas = true;
    int total_mahasiswa = 0;
    while (batas == true)
    {
        cout << "Data NIlai:\t";
        cin >> nilai_mahasiswa;
        if (nilai_mahasiswa <0)
        {
            batas = false;
            cout << "Error\n";
            break;
        }
        else {
            total_nilai += nilai_mahasiswa;
            i++;
        }
        
        total_mahasiswa += i;
        
    }
    cout <<"TOTAL: "<< total_mahasiswa;
    double rata = total_nilai / total_mahasiswa;
    cout <<"TOTAL NILAI: "<< rata;

    
    return 0;
}
