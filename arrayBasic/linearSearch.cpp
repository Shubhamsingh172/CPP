#include <iostream>
using namespace std;

//basic program for linear Search

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {8,9,6,5,7,2,3,1,5};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the Element to be Searched : ";
    cin >> key;
    if(linearSearch(arr, n, key) == -1)
        cout << "Element is not present in the Array.\n";
    else
        cout << "Element is present in the Array" << endl;
    
    cout << endl;
    return 0;
}