// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         if(nums.size() == 1)
//             return nums;
        
//         unordered_map<int,int>mp;
//         for(auto &num : nums)
//             mp[num]++;
        
//         vector<pair<int ,int>>vec;
//         for(auto &it : mp)
//         {
//             vec.push_back({it.first,it.second});
//         }
        
//         auto lambda = [](pair<int, int>&p1, pair<int, int>&p2)
//         {
//             if(p1.second == p2.second)
//                 return p1.first < p2.first;
//             return p1.second > p2.second;       
//         };
//         sort(vec.begin(),vec.end(), lambda);

//         vector<int>result(k);
//         int i = 0;

//         while(i < k)
//         {
//             result[i] = vec[i].first;
//             i++;
//         }
//         return result;
//     }
// };