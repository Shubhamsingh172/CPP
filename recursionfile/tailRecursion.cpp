#include <iostream>
using namespace std;

int fact(int n, int product)
{
    if(n <= 1)
        return product;
    return fact(n - 1, product * n); // tail recursion because last step is recursion call previously multiplication is the last operation
}
int Sum(int n, int sum)
{
    if(n == 1)
        return sum + n;
    return Sum(n - 1, sum + n);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Factorial of " << n << " is : " << fact(n, 1) << endl;
    cout << "Summation of " << n << " is : " << Sum(n, 0) << endl;
    return 0;
}