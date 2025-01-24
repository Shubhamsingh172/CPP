// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverse(string &str, int n)
{
    int i = 0;
    int j = n - 1;
    while(i <= j)
    {
        str[j] = str[i] + str[j] - (str[i] = str[j]);
        i++;
        j--;
    }
}
int main() {
    // Write C++ code here
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    cout << "String before Reverse" << endl;
    cout << str;
    reverse(str, str.length());
    cout << "\n\nString After Reverse\n";
    cout << str;
    return 0;
}