//Sum of upper and lower triangles
#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {{6, 5, 4},
                        {1, 2, 5},
                        {7, 9, 7}};

    int upperSum = 0;
    int lowerSum = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            upperSum += matrix[i][j];
        }
    }
    cout << "Upper Bound sum is : " << upperSum << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            lowerSum += matrix[i][j];
        }
    }
    cout << "\nUpper Bound sum is : " << lowerSum << endl;
}

//done successfully