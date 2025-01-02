#include <iostream>
using namespace std;

int main()
{
    static int matrix[21][21];
    int k = 1;
    int n;
    cout << "Enter odd number of dimension : ";
    cin >> n;
    int i = 0;
    int j = n/2;
    matrix[i][j] = k++;
    while(k <= n*n)
    {
        int pr = i;
        int pc = j;
        i--;
        if( i == -1)
            i = n - 1;
        
        j++;
        if(j == n)
            j = 0;
        
        if(matrix[i][j] != 0)
        {
            i = pr + 1;
            j = pc;
        }
        
        matrix[i][j] = k++;
    }
    cout << "\nMagic Square\n";
    for(int i = 0; i < n; i++)
    {
        cout.width(5);
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
}