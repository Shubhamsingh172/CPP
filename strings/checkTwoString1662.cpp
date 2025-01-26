// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         string s1 = "";
//         string s2 = "";

//         for(int i = 0; i < word1.size(); i++)
//             s1 += word1[i];
        
//         for(int i = 0; i < word2.size(); i++)
//             s2 += word2[i];

//         return s1 == s2;


//      approach 2
//         int m = word1.size();
//         int n = word2.size();

//         int w1 = 0;
//         int w2 = 0;
//         int i = 0; 
//         int j = 0;

//         while(w1 < m && w2 < n)
//         {
//             if(word1[w1][i] != word2[w2][j])
//                 return false;
//             i++;
//             j++;

//             if(i == word1[w1].length())
//             {
//                 i = 0;
//                 w1++;
//             }

//             if(j == word2[w2].length())
//             {
//                 j = 0;
//                 w2++;
//             }
//         }
//         if(w1 == word1.size() && w2 == word2.size())
//             return true;
//         return false;
//     }
// };


