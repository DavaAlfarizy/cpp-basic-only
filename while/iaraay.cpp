#include <iostream>
using namespace std;

int main()
{
    int i, j, low, maks;
    int nilai[10];
    float total, rata2;
    string nama[10];
    cout << "Berapa jumlah elemen yang ingin disi? ";
    cin >> j;

    for (i=0;i < j; i++)
    {
        cout << "Masukkan nama murid "<<i+1<<" = ";
        cin >>nama[i];
        cout << "Masukkan nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    cout << "\nCetak" << endl;
    cout << "Daftar nilai matematika" << endl;
    cout << "PPLG X-1" << endl;
    cout << "SMK WIKRAMA" << endl;
    cout << "======================================================" << endl;
    cout << "No.            " "Nama         "   << "Nilai       " << endl;
    cout << "======================================================" << endl;

    for (i=0; i < j; i++)
    {
        cout <<  " " <<i+1<< "      "<< nama [i]      << "        " << nilai[i]        <<endl;
    }
    cout << " =====================================================" << endl;
    for (i=0; i <j; i++)
    {
        if (nilai [i] > maks)
            {
                maks = nilai[i];
            }
    }

    for ( i = 0; i < j; i++);
    {
        if (nilai [i] < low)
            {
                low = nilai[i];
            }
    }

    total = 0;
    for(i=0; i < j; i++);
    {
        total=total+nilai[i];
    }

    rata2=(total/j);

cout << "Nilai tertinggi : " << maks << endl;
cout << "Nilai terendah : "  << low << endl;
cout << "Nilai rata-rata : " << rata2 <<endl;

cout << endl;
return 0;

}