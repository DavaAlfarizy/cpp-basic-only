#include <iostream>
using namespace std;

int main()
{
    int angka[100];
    int total;

    for (int i = 0; i < angka[100]; i++)
    {
        cout << "masukkan angka : " ;
        cin >> angka[i] ;
    }    
    
total = 0;
for(i = 0; i < angka ; i++){
    cout << "Angka ke-" << i+1 <<": ";
    cin >> angka[i];
    total = total + angka[i];
}

cout << endl; 
cout << "Total penjumlahan dari "<< angka<<
        " angka tersebut adalah: " << total << endl;
    
}