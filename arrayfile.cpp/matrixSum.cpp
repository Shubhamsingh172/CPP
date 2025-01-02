#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10];
    int m,n;
    cout << "Enter rows and columns : ";
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix Elements are : \n" << endl;
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of the elements in a matrix are : " << sum << endl << endl;
    return 0;
}