#include <iostream>
#include <string>
using namespace std;

void solve(string str, int idx)
{
    if(idx >= str.length())
        return;
    solve(str,idx + 1);
    cout << str[idx] << "";
}
int main()
{
    string input;
    cout << "Enter an input string : ";
    getline(cin, input);
    solve(input,0);
    cout << endl << endl;
}