// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int>result(nums.size());
//         int j = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] != 0)
//             {
//                 result[j] = nums[i];
//                 j++;
//             }
//         }
//         while(j < nums.size())
//         {
//             result[j] = 0;
//             j++;
//         }

//         for(int i = 0; i < nums.size(); i++)
//             nums[i] = result[i];
//     }
// };

//solution with greater time complexity

// void moveZeroes(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = 1; j < nums.size(); j++) {
//             if (nums[j - 1] == 0)
//                 swap(nums[j], nums[j - 1]);
//         }
//     }
// }