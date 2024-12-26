#include <iostream>
using namespace std;

int print(int n)
{
    if(n == 5)
    {
        cout << n << endl;
        return 0;
    }
    cout << n << "\n";
    n++;
    print(n);
}
int main()
{
    cout << "Recursion....\n";
    print(1);
}