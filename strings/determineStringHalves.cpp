// class Solution {
// public:
//     bool isVowel(char ch)
//     {
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//             return true;
//         return false;
//     }
//     bool halvesAreAlike(string s) {
//         int n = s.length();
//         int i = 0;
//         int j = n/2;
//         int left = 0;
//         int right = 0;

//         while(i < n/2 && j < n)
//         {
//             if(isVowel(s[i])) left++;
//             if(isVowel(s[j])) right++;
//             i++;
//             j++;
//         }

//         if(left == right) return true;
//         return false;
//     }
// };