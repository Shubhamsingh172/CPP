// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>>result;
//         int matrix[21][21];
//         int actual = n / 2;
//         if(n % 2 == 1)
//             actual = n / 2 + 1;
//         int k = 1;
//         for(int iter = 0; iter < actual; iter++ )
//         {
//             for(int j = iter; j <= n - 1 - iter; j++)
//                 matrix[iter][j] = k++;

//             for(int j = iter + 1; j <= n - 1 - iter; j++)
//                 matrix[j][n - 1 - iter] = k++;

//             for(int j = n - 2 - iter; j >= iter; j--)
//                 matrix[n - 1 - iter][j] = k++;
                
//             for(int j = n - 2 - iter; j > iter; j--)
//                 matrix[j][iter] = k++;
//         }
//         for(int i = 0; i < n; i++)
//         {
//             vector<int>temp;
//             for(int j = 0; j < n; j++)
//                 temp.push_back(matrix[i][j]);
//             result.push_back(temp);    
//         }
//         return result;
//     }
// };