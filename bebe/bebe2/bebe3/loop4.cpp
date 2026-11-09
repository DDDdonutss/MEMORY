#include <iostream>
using namespace std;
int main()
{
    int batas_baris = 4;
    int batas_kolom = 4 ;
    
    for (int i = 0; i <= batas_baris; i++)
    {
        for (int j = 0; j <= batas_kolom; j++)
        {
            if (j % 2 == 0)
            {
                cout<<'*'; 
            } 
            else 
            {
                cout << '#';
            }
            
        }
        cout << endl;
    }
    
    return 0;
}
