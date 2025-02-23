// class Solution {
// public:
//     vector<vector<int>>result;
//     unordered_set<int>st;
//     int n;

//     void solve(vector<int>& temp, vector<int>& nums)
//     {
//         if(temp.size() == n)
//         {
//             result.push_back(temp);
//             return;
//         }

//         for(int i = 0; i < n; i++)
//         {
//             if(st.find(nums[i]) == st.end())
//             {
//                 temp.push_back(nums[i]); // do
//                 st.insert(nums[i]);
//                 solve(temp, nums); //explore
//                 temp.pop_back(); // undp
//                 st.erase(nums[i]);
//             }
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<int>temp;
//         n = nums.size();
//         solve(temp, nums);
//         return result;
//     }
// };