#include <iostream>
using namespace std;

class Solution
{
    int reverses(int num)
    {
        int max = 2147483647;
        int min = -2147483648;
        if(num > max || num < min)
            return 0;
        
        int rev = 0;
        int temp = num;
        while(temp)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        cout << rev;
        return 0;
    }
    public:
        friend int main();
};
int main()
{
    Solution s;
    int num;
    cout << "Enter a Integer : ";
    cin >> num;
    s.reverses(num);
    cout << endl;
    return 0;
}