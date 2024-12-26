#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter desired number : ";
    cin >> n;
    cout << "Factorial of a number is : " << factorial(n) << endl;
    return 0;
}