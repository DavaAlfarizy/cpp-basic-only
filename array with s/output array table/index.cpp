#include <iostream>
using namespace std;

int main ()
{
    int arr[5][3] = { {1, 7 , 0}, {0, 1, 7}, {1, 2, 3}, {4, 6, 8},{3, 5, 7} };
    for ( int a = 0; a < 5; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[a][i] << " " ;

        }
        cout << endl;
    }
}