// class Solution {
// public:
//     int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
//        int sum = 0;

//        if(nums1.size() % 2 != 0)
//        {
//             for(auto &it : nums2)
//                 sum ^= it;
//        }

//        if(nums2.size() % 2 != 0)
//        {
//             for(auto &it : nums1)
//                 sum ^= it;
//        }
//        return sum;
//     }
// };