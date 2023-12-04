#include <iostream>
using namespace std;

int main(){
char jwb;
    do{
    int baris, kolom;
    cout << "Input jumlah baris matriks: ";
    cin >> baris;
    cout << "Input jumlah kolom matriks: ";
    cin >> kolom;
    cout << endl;

    int arr[baris][kolom];
    int arr1[baris][kolom];

    for(int i = 0; i < baris ; i++){
        for(int j = 0; j < kolom; j++){
        cout << "Masukkan nillai x: ";
        cin >> arr[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < baris ; i++){
        for(int j = 0; j < kolom; j++){
        cout << "Masukkan nilai y: ";
        cin >> arr1[i][j];
        }
    }

    cout<< endl;

    cout << "NILAI X" << endl;
    for(int i = 0; i < baris; i++) { 
        for(int x = 0; x < kolom; x++) { 
            cout << " | " <<arr[i][x]<< " | "; 
        }
        cout<<endl;
    }
    cout << endl;

    cout << "NILAI Y" << endl;
    for(int i = 0; i < baris; i++) { 
        for(int x = 0; x < kolom; x++) { 
            cout << " | " <<arr1[i][x]<< " | "; 
        }
        cout<<endl;
    }
    cout << endl;
    
    int pilihan;
    cout << "Pilihlah operator" <<  endl;
    cout << "[1] = +" << endl;
    cout << "[2] = -" << endl;
    cout << "[3] = *" << endl;
    cout << "[4] = /" << endl; 
    cout << "[5] = %" << endl;
    cout << "Masukkan pilihan operator: " << endl;
    cin >> pilihan;

    for(int i = 0; i < baris ; i++){
        for(int j = 0; j < kolom; j++){
        switch (pilihan) {
    case 1:
        cout << "Hasil dari " << arr[i][j] << " + " << arr1[i][j] << " = " << arr[i][j]+arr1[i][j] << endl;
        break;
    case 2:
        cout << "Hasil dari " << arr[i][j] << " - " << arr1[i][j] << " = " << arr[i][j]-arr1[i][j] << endl;
        break;
    case 3:
        cout << "Hasil dari " << arr[i][j] << " * " << arr1[i][j] << " = " << arr[i][j]*arr1[i][j] << endl;
        break;
    case 4:
        cout << "Hasil dari " << arr[i][j] << " / " << arr1[i][j] << " = " << arr[i][j]/arr1[i][j] << endl;
        break;
    case 5:
        cout << "Hasil dari " << arr[i][j] << " % " << arr1[i][j] << " = " << (int)arr[i][j] % (int)arr1[i][j] << endl;
        if (arr1[i][j]==2)
        {
            if (arr[i][j]%arr[i][j]==0)
            {
                cout << "-Genap"<< endl;
            }
            else if (arr[i][j]%arr[i][j]==1)
            {
                cout << "-Ganjil"<< endl;
            }  
        } else
        {
            cout << "-Invalid" << endl;
        }
        
        break;
    default :
                printf("Maaf, pilihan menu tidak tersedia") ;
        }
    }
    }
    cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
    cin >> jwb;
    } while (jwb == 'Y'|| jwb == 'y');
    cout << endl;
    while (jwb == 't' || jwb =='T')
    {
    cout << "Program selesai!";
    return 0;
    }
}
