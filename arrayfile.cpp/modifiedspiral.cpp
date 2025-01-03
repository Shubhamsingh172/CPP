// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         int left = 0; // row;
//         int top = 0; 
//         int right = n - 1;
//         int down = m - 1; 

//         int dir = 0;
//         /*
//             if 0 : then left ---> right
//             if 1 : then top ----> down
//             if 2 : then right -----> left
//             if 3 : then down -----> top
//         */
//         vector<int>result;

//         while(top <= down && left <= right)
//         {
//             if(dir == 0)
//             {
//                 for(int i = left; i <= right; i++)
//                     result.push_back(matrix[top][i]);
//                 top++;
//             }
//             if(dir == 1)
//             {
//                 for(int i = top; i <= down; i++)
//                     result.push_back(matrix[i][right]);
//                 right--;
//             }
//             if(dir == 2)
//             {
//                 for(int i = right; i >= left; i--)
//                     result.push_back(matrix[down][i]);
//                 down--;
//             }
//             if(dir == 3)
//             {
//                 for(int i = down; i >= top; i--)
//                     result.push_back(matrix[i][left]);
//                 left++;
//             }
//             dir++;
//             if(dir == 4)
//                 dir = 0;
//         }
//         return result;
//     }
// };