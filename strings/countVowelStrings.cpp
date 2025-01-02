// int isVowel(char ch) {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             return 1;
//         return 0;
//     }
//     vector<int> vowelStrings(vector<string>& words,
//                              vector<vector<int>>& queries) {
//         vector<int> result;
//         for (int i = 0; i < queries.size(); i++) {
//             int count = 0;
//             for (int j = queries[i][0]; j <= queries[i][1]; j++) {
//                 if (isVowel(words[j][0]) &&
//                     isVowel(words[j][words[j].size() - 1]))
//                     count++;
//             }
//             result.push_back(count);
//         }
//         return result;
//     }

//2 way with optimal solution 
// class Solution {
// public:
//     int isVowel(char& ch) {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             return 1;
//         return 0;
//     }
//     vector<int> vowelStrings(vector<string>& words,
//                              vector<vector<int>>& queries) {
//         vector<int> result(queries.size());
//         vector<int> cumSum;
//         int q = queries.size();
//         int count = 0;
//         for (int i = 0; i < words.size(); i++)
//         {
//             if (isVowel(words[i][0]) && isVowel(words[i].back()))
//                 count++;
//             cumSum.push_back(count);
//         }
//         for(int i = 0; i < queries.size(); i++)
//         {
//             int l = queries[i][0];
//             int r = queries[i][1];

//             result[i] = cumSum[r] - ((l > 0 ) ? cumSum[l-1] : 0);
//         }
//         return result;
//     }
// };
