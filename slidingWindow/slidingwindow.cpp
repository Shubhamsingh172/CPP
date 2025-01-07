// whenever we came across contiguous arrat like this term then it can be solved by sliding window method
// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n = nums.size();
//         int i = 0, j = 0;
//         int sum = 0;
//         int minlength = INT_MAX;
//         while(j < n)
//         {
//             sum += nums[j];

//             // to small the window therefore we check and validate here
//             while(sum >= target)
//             {
//                 minlength = min(minlength, j - i + 1);
//                 sum -= nums[i];
//                 i++; // shifting i to the right to find the minimal length
//             }
//             j++;
//         }
//         return minlength == INT_MAX ? 0 : minlength;
//     }
// };