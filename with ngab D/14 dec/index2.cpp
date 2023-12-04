#include <iostream>
using namespace std;

int main()
{
    string nama[5][5] ;


    cout << " Masukkan Nama Siswa : " ;
    cin >> nama;


    for (int i = 0; i < 5; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout << nama[i][a] << endl;
        }
        
    }
    

    
}