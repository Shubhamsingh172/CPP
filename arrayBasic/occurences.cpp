#include <iostream>
using namespace std;

int Occurences(int arr[], int n, int key)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }
    return count;
}
int main()
{
    int arr[] = {1,2,2,3,4,5,2};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the key : ";
    cin >> key;
    if(Occurences(arr, n, key))
        cout << key << " appear " << Occurences(arr, n, key) << " times in an Array.\n\n";
    else
        cout << key << " does not appear in an Array.\n\n";
    return 0;
}