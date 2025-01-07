// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int>mp;

    // insertion in map can be of two ways by using key and value and using insert({}) func
    mp["shubham"] = 1;
    mp["saurav"] = 2;
    
    for(auto &it : mp)
    {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}