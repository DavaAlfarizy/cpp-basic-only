#include <iostream>
using namespace std;

int main ()
{
    int row, col;
    int opr;
    string ulang;
    

    do
    {
    
    cout << " input jumlah baris (1) : " ;
    cin >> row ;
    cout << " input jumlah kolom (1) : " ;
    cin >> col;

    int array[row][col];
    int larik[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            cout << " input angka : "  ;
            cin >> array[i][a] ;
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            cout << " | " << array[i][a] << " | " ;

        }
        cout << endl;
    }
        for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            cout << " input angka : "  ;
            cin >> larik[i][a] ;
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; a < col; a++)
        {
            cout << " | " << larik[i][a] << " | " ;

        }
        cout << endl;
    }
    
    
    cout << "Pilihlah operator" <<  endl;
    cout << "[1] = +" << endl;
    cout << "[2] = -" << endl;
    cout << "[3] = *" << endl;
    cout << "[4] = /" << endl; 
    cout << "[5] = %" << endl;
    cout << "Masukkan pilihan operator : " << endl;
    cin >> opr;

    if (opr == 1)
    {
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                cout <<" | " <<  array[i][a] + larik[i][a] << " | ";
            }
                cout << endl;
        }
        
    }
    if (opr == 2)
    {
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                cout <<" | " <<  array[i][a] - larik[i][a] << " | ";
            }
                cout << endl;
        }
        
    }
    if (opr == 3)
    {
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                cout <<" | " <<  array[i][a] * larik[i][a] << " | ";
            }
                cout << endl;
        }
        
    }
    if (opr == 4)
    {
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                cout <<" | " <<  array[i][a] / larik[i][a] << " | ";
            }
                cout << endl;
        }
        
    }
    if (opr == 5)
    {
            for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                if ( larik[i][a] != 2)
                {
                    cout << " teu tiasa a ";
                }
                else if (array[i][a] % larik[i][a] == 1)
                {
                    cout << " ganjil " ;
                }
                else if (array[i][a] % larik[i][a] == 0)
                {
                    cout << " genap " ; 
                }
                else { 
                    cout << " invalid a " ;
                }
            }
                cout << endl;
        }
    
    }
    cout << " apakah kamu ingin mengulang ? " ;
    cin >> ulang;
    }
    while (ulang == "y");

    if (ulang =="n")
    {
        cout << " beresan ";
    }
    else{
        cout << " invalid";
    }
    

    

    
    
}