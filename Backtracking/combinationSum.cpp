// class Solution {
// public:
//     void solve(vector<int>& candidates, int target, vector<int>& curr, int idx, vector<vector<int>>&result)
//     {
//         if(idx == candidates.size())
//         {
//             if(target == 0)
//                 result.push_back(curr);
//             return;
//         }
//         if(candidates[idx] <= target)
//         {
//             curr.push_back(candidates[idx]);
//             solve(candidates, target - candidates[idx], curr, idx, result);
//             curr.pop_back();
//         }
//         solve(candidates, target, curr, idx + 1, result);
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>>result;
//         vector<int>curr;

//         sort(candidates.begin(), candidates.end());
//         solve(candidates, target, curr, 0, result);

//         return result;
//     }
// };