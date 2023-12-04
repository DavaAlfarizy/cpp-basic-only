#include <iostream>
using namespace std;

int main ()
{  
    int row, col;
    int arr1[row][col];
    int arr2[row][col];

    cout << " input baris " ;
    cin >> row;
    cout << " input kolom " ;
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        for (int a = 0; i < col; a++)
        {
            cout << " input data";
            cin >> arr1[i][a];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int a = 0; i < col; a++)
        {
            cout << " Array 1 adalah : " ;
            cout << arr1[i][a] << endl ;
        }
        
    }
    

    
    

}