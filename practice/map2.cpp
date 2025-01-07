// about find function of map 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map<int,string> mp;
    mp.insert({1,"sharukh khan"});
    mp.insert ({2,"salman khan"});
    mp[3] = "virat kohli";
    
    // this find function find the address or index of the given searched follow and stored it into it variable which is of auto type so in if block it will verify whether its equals to end element of the map if not then it will execute and display the answer on the screen other wise not found message display on the screen.
    auto it = mp.find(1);
    if(it != mp.end())
    {
        cout << "key found which is " << it->first << " = " << it->second << endl;
    }
    else
        cout << "key not found in the map." << endl;
    cout << endl;
    return 0;
}