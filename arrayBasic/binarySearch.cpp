#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key)
            return mid;
        
        else if(arr[mid] <= key)
            low = mid + 1;
        
        else if(arr[mid] >= key)
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10,12,15,17,20,22,25,32,55};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the key to be Searched : ";
    cin >> key;
    if(binarySearch(arr, n, key) == -1)
        cout << "Element is not present in the array.\n\n";
    else
        cout << "Element is present in the Array.\n\n";
    return 0;
}