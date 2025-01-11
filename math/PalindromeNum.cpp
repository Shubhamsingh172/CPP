#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int num)
{
    int temp = num;
    int sum = 0;
    while(temp)
    {
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if(num == sum)
        return true;
    else 
        return false;
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(isPalindrome(n))
        cout << "Number is Palindrome.\n";
    else
        cout << "Number is not a Palindrome.\n";
    cout << endl;
}