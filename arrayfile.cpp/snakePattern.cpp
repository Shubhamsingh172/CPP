#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80}, 
        {90, 100, 110, 120},
        {130, 140, 150, 160}
    };
    int arr1[16];
    int k = 0;
    for (int i = 0; i < sizeof(arr[0]) / sizeof(int); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
                arr1[k++] = arr[i][j];
        }
        else
        {
            for (int j = sizeof(arr[0]) / sizeof(int) - 1; j >= 0; j--)
                arr1[k++] = arr[i][j];
        }
    }
    for (int i = 0; i < k; i++)
        cout << arr1[i] << " ";
    cout << endl;}
