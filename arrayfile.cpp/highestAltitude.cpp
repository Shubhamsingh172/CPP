#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>result;
        int sum = 0;
        result.push_back(0);
        for(int i = 0; i < gain.size(); i++)
        {
            sum += gain[i];
            result.push_back(sum);
        }
        return *max_element(result.begin(),result.end());
    }
};
int main()
{
    Solution s;
    vector<int>gain = {-5, 1, 5, 0, -7};
    int highestAlt = s.largestAltitude(gain);
    cout << "Highest Altitude of the Array is  : " << highestAlt << endl;
    cout << endl;
}