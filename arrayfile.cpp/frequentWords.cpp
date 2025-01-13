// class Solution {
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         unordered_map<string,int> mp;
         
//         //step 1 - frequency count
//         for(auto &word : words)
//             mp[word]++;
        
//         //step 2 storing into vector
//         vector<pair<string,int>> vec;
//         for(auto &it : mp)
//             vec.push_back({it.first,it.second});
        
//         // sort the words if their frequency are same using comparator function
//         auto sorting = [](pair<string,int>& p1, pair<string, int>& p2)
//         {
//             if(p1.second == p2.second)
//                 return p1.first < p2.first;
//             return p1.second > p2.second;
//         }; // comparator function.

//         sort(vec.begin(),vec.end(),sorting);
        
//         vector<string>result(k);
//         int i = 0;

//         while(i < k)
//         {
//             result[i] = vec[i].first;
//             i++;
//         }
//         return result;
//     }
// };