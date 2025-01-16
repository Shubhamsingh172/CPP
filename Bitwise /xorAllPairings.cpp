// class Solution {
// public:
//     int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int>mp;
//         for(auto &it : nums1)
//         {
//             mp[it] += nums2.size();
//         }

//         for(auto &it : nums2)
//         {
//             mp[it] += nums1.size();
//         }
//         int sum = 0;
//         for(auto &it : mp)
//         {
//             if(it.second % 2 != 0)
//                 sum ^= it.first;
//         }
//         return sum;
//     }
// };