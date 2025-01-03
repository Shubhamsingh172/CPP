#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>>mat= {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Array Before 90 Degree rotated in anticlockwise direction." << endl;
    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[0].size(); j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    for(int i = 0; i < mat.size(); i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }
    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = i + 1; j < mat[0].size(); j++)
            swap(mat[i][j],mat[j][i]);
    }
    cout << "Array after 90 Degree rotated in anticlockwise direction." << endl;
    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[0].size(); j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}