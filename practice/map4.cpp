// accessing values by key
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int , int> mp;
    mp[1] = 10;
    mp.insert({2,20});
    mp[3] = 30;

    cout << mp[1] << endl;
    cout << mp[2] << endl;
    cout << mp[3] << endl;

    return 0;
}