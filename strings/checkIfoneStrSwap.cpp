// class Solution {
// public:
//     bool areAlmostEqual(string s1, string s2) {
//         int times = 0;
//         vector<int>arr;
//         if(s1 == s2)
//             return true;
//         else 
//         {
//             for(int i = 0; i < s1.length(); i++)
//             {
//                 if(s1[i] != s2[i])
//                 {
//                     arr.push_back(i);
//                 }
//             }
//         }
//         if(arr.size() != 2)
//             return false;
//         swap(s2[arr[0]], s2[arr[1]]);
//         return s1 == s2;
//     }
// };