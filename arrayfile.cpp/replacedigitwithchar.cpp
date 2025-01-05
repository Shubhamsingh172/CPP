// class Solution {
// public:
//     string replaceDigits(string s) {
//         for (int i = 1; i <= s.length(); i += 2) {
//             s[i] = abs(s[i] + 49 - 'a') + s[i-1];
//         }
//         return s;
//     }
// };