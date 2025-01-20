// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();

//         int target_index = -1; // gola index
//         for(int i = n - 1; i > 0; i--)
//         {
//             if(nums[i] > nums[i-1])
//             {
//                 target_index = i - 1;
//                 break;
//             }
//         }

//         if(target_index != -1)
//         {
//             int right_index = target_index;
//             for(int j = n - 1; j >= target_index; j--)
//             {
//                 if(nums[j] > nums[target_index])
//                 {
//                     right_index = j;
//                     break;
//                 }
//             }
//             swap(nums[target_index],nums[right_index]);
//         }
//         reverse(nums.begin() + target_index + 1, nums.end());
//     }
// };