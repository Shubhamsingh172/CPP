#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Fibonacci series of " << n << " number" << endl;
    for (int i = 1; i <= n; i++)
        cout << fibo(i) << " ";
    cout << endl;
    return 0;
}