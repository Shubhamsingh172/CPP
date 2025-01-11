// Reverse prefix of a word program
// class Solution {
// public:
//     string reversePrefix(string word, char ch) {
//         int index = 0;
//         for(int i = 0; i < word.length(); i++)
//         {
//             if(word[i] == ch)
//             {
//                 index = i;
//                 break;
//             }
//         }
//         for(int i = 0, j = index; i < j; i++, j--)
//         {
//             swap(word[i],word[j]);
//         }
//         return word;
//     }
// };