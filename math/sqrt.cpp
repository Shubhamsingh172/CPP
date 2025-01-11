#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
    public:
        void Sqroot(int num)
        {
            cout << "Square root of a number " << num << " is : " << int(sqrt(num)) << endl; 
            //for round to get an integer we typecast the result
        }
};
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    Solution s;
    s.Sqroot(num);
    cout << endl;
    return 0;
}