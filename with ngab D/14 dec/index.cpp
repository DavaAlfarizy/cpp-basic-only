#include <iostream>
using namespace std;

int main()
{
    string nama[1][5] ;


    for (int i = 0; i < 1; i++)
    {
        for (int a = 0; a < 5; a++)
        {

            cout << " Masukkan Nama Siswa : " ;
            cin >> nama[i][a];
        }
        
    }
    for (int i = 0; i < 1; i++)
    {
        for (int a = 0; a < 5; a++)
        {

            cout << nama[i][a]  << endl;
            
        }
        
    }
    

    
}