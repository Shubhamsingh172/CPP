// class Solution {
// public:
//     vector<int> applyOperations(vector<int>& nums) {

//         for(int i = 0; i < nums.size() - 1; i++)
//         {
//             if(nums[i] == nums[i + 1])
//             {
//                 nums[i] = nums[i] * 2;
//                 nums[i + 1] = 0;
//             }
//         }
        
//         vector<int>result;
//         // also using vector<int>result(nums.size(), 0) then one loop is not used which is good
//         int j = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i] != 0)
//             {
//                 result.push_back(nums[i]);
//                 j++;
//             }
//         }
//         while(j < nums.size())
//         {
//             result.push_back(0);
//             j++;
//         }
//         return result;
//     }
// };