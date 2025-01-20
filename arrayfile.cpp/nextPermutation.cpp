// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();

//         int target_index = -1; // gola index which will find the number at ith position which greater than i - 1 and store 
            // i - 1 in target_index variable.
//         for(int i = n - 1; i > 0; i--)
//         {
//             if(nums[i] > nums[i-1])
//             {
//                 target_index = i - 1;
//                 break;
//             }
//         }

//         if(target_index != -1) // if somehow number is not found and in the above for loop it reaches to last then directly reverse 
//         {
//             int right_index = target_index; // 1 3 4 5 2 here first we look for number from right is greater than its i -1 or 
                //not if yes then swap it with each other and reversing the rest of the numbers
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