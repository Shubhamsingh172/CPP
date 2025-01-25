// class Solution {
// public:
//     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         vector<string>sorted;
//         map<int, string, greater<int>>mp;
//         for(int i = 0; i < names.size(); i++)
//         {
//             mp[heights[i]] = names[i];
//         }
//         for(auto &it : mp)
//             sorted.push_back(it.second);
//         return sorted;
//     }
// };