#include <iostream>
using namespace std;
int pattern(int n)
{
    if(n == 1)
    {
        cout <<  n << " ";
        return 0;
    }
    cout << n << " ";
    return pattern(n-1);
}
int number(int n)
{
    if(n == 1)
    {
        return pattern(1);
    }
    pattern(n);
    cout << endl;
    return number(n-1);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    number(n);
    return 0;
}