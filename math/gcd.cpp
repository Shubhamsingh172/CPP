// class Solution {
// public:
//     int findGCD(vector<int>& nums) {
//         int m = *max_element(nums.begin(), nums.end());
//         int mm = *min_element(nums.begin(), nums.end());

//         int greatest = 0;
//         for(int i = 1; i <= m; i++)
//         {
//             if(m % i == 0 && mm % i == 0)
//                 greatest = i;
//         }
//         return greatest;
//     }
// };