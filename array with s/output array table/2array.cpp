#include <iostream>
using namespace std;

int main ()
{
    int arr1[2][3] = { {1, 7 , 0}, {0, 1, 7}};
    int arr2[2][3] = { {2, 1, 4}, {5, 6, 2}};
    int jumlah[2][3];
    for ( int a = 0; a < 2; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr1[a][i] << " | " ;

        }
        cout << endl;
    }
    cout << "===========" << endl;
        for ( int a = 0; a < 2; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr2[a][i] << " | " ;

        }
        cout << endl;
    }
    for ( int a = 0; a < 2; a++)
    {
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << arr2[a][i] + arr1[a][i] << " | " ;

        }
        
    }
}
