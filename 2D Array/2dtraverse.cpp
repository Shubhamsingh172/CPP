#include <iostream>
using namespace std;

int main()
{
    int grid[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                     };
    for(int i = 0; i < sizeof(grid[0])/sizeof(int); i++)
    {
        for(int j = 0; j < sizeof(grid[i])/sizeof(int); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}