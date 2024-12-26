#include <iostream>
using namespace std;
void pattern(int n)
{
    if(n == 1)
    {
        cout.width(4);
        cout <<  n << " ";
        return;
    }
    pattern(n-1);
    cout.width(4);
    cout << n << " ";
}
void number(int n)
{
    if(n == 1)
    {
        pattern(n);
        cout << endl;
        return;
    }
    number(n-1);
    pattern(n);
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    number(n);
    return 0;
}