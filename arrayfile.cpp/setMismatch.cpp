// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n = nums.size();

//         int repeat = -1;
//         int missing = -1;
    
//         for(int i = 0; i < n; i++)
//         {
//             if(nums[abs(nums[i]) - 1] < 0)
//                 repeat = abs(nums[i]);
//             else 
//                 nums[abs(nums[i]) - 1] *= -1;
//         }

//         for(int i = 0; i < n; i++)
//         {
//             if(nums[i] > 0)
//             {
//                 missing = i + 1;
//                 break;
//             }
//         }
//         return {repeat, missing};
//     }
// };