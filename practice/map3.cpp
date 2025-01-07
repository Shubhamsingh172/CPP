#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> mp;
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Cherry";
    mp[4] = "Dates";
    
    // if i want or delete the cherry fruit from the index then we have to use an index of it, also we can use its value to delete that particular element but for that we need to traverse the whole map.
    for(auto &it : mp)
    {
        cout << it.first << " => " << it.second << endl;
    }
    cout << endl;
    return 0;
}