#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> set = {10,2,15,9,10,5,2,3,6,13,25};
    int queries[] = {5,2,9,10,20};
    int n = sizeof(queries)/sizeof(queries[0]);
    for(int i = 0; i < n; i++)
    {
        if(set.find(queries[i]) != set.end())
            cout << queries[i] << " exist in an Array.\n";
        else 
            cout << queries[i] << " does not exist in an Array.\n";
    }
    cout << endl;
    return 0;
}