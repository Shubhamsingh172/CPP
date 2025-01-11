// Rearrange Array By sign

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int>pos;
//         vector<int>neg;
//         int n = nums.size();

//         for(int i = 0; i < n; i++)
//         {
//             if(nums[i] >= 1)
//                 pos.push_back(nums[i]);
//             else
//                 neg.push_back(nums[i]);
//         }
//         int posIndex = 0, negIndex = 0;
//         vector<int>result;
//         for(int i = 0; i < n; i++)
//         {
//             if(i % 2 == 0 && posIndex < pos.size())
//                 result.push_back(pos[posIndex++]);
//             else if(negIndex < neg.size())
//                 result.push_back(neg[negIndex++]);
//         }
//         return result;
//     }
// };