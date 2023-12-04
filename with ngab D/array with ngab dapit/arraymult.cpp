#include <iostream>
using namespace std;

int main()
{
int input1;
int input2;


    cout << "Masukkan index pertama : " ;
    cin >> input1 ;

    cout << "Masukkan index kedua : " ;
    cin >> input2 ;



    int nama[input1][input2] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < input1; i++)
    {
        for (int a = 0; a < input2; a++)
        {
            cin >> nama[i][a];
        }
}

    for (int i = 0; i < input1; i++)
    {
        for (int a = 0; i < input2; a++)
        {
            cout << nama[i][a];

        }
        
    }
    
    




    
}