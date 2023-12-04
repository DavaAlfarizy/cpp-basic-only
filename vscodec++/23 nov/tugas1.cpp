#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "masukan nilai anda :";
    cin >> angka;
    if (angka > 90 && angka < 101 )
    {
        cout << "ANDA TERBAIK";
    }
        else if( angka < 90 && angka > 75)
        {
            cout << "anda cukup";
        }
        else if( angka < 75 && angka > 60 )
        {
            cout <<"anda kurang";
        }
        else if (angka < 60)
        { 
            cout << "ANDA HARUS MENGULANG";
        } 
        if( angka > 100 )
        {
            cout << "lu kelebihan kocak";
        }
        

        return 0;

    
    
}