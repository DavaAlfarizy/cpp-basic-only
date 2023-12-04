#include <iostream>
using namespace std;

int main()
{

    char angka;

        printf("Masukan Angka : ");
        scanf(" %c", &angka);

    switch (angka) {
    case '0' :
        printf("Hari Minggu");
        break; 
    case '1' :
        printf("Hari Senin");
        break; 
    case '2' :
        printf("Hari Selasa");
        break; 
    case '3' :
        printf("Hari Rabu");
        break; 
    case '4' :
        printf("Hari Kamis");
        break; 
    case '5' :
        printf("Hari Jumat");
        break; 
    case '6' :
        printf("Hari Sabtu");
        break; 

    cout << " Hari ini adalah hari = " << angka << endl;

    default:
        printf("INVALID!");
        break;

    }
     return 0;

}