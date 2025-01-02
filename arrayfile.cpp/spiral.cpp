#include <iostream>
using namespace std;

int main()
{
    int matrix[21][21];
    int n;
    cout << "Enter dimension for spiral matrix : ";
    cin >> n;
    int k = 1;
    for(int iter = 0; iter < n/2 + 1; iter++)
    {
        //firstly for row placing;
        for(int j = iter; j <= n - 1 - iter; j++)
            matrix[iter][j] = k++;
        
        for(int j = iter + 1; j <= n - 1 - iter; j++)
            matrix[j][n-1-iter] = k++;

        for(int j = n - 2 - iter; j >= iter; j--)
            matrix[n-1-iter][j] = k++;
        
        for(int j = n - 2 - iter; j > iter; j--)
            matrix[j][iter] = k++;
    }
    cout << endl;
    cout << "Spriral matrix is : ";
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout.width(7);
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}