//hard problem on sliding window 76

// class Solution {
// public:
//     string minWindow(string s, string t) {
//         int n = s.length();

//         if(t.length() > n)
//             return "";
        
//         unordered_map<char, int> mp;
        
//         //storing character of t into map to check and validate
//         for(char &ch : t)
//             mp[ch]++;

//         int requiredCount = t.length();
//         int minWindowSize = INT_MAX;
//         int start_i = 0;

//         int i = 0;
//         int j = 0;

//         while(j < n)
//         {
//             char ch = s[j];
//             if(mp[ch] > 0)
//                 requiredCount--;
            
//             mp[ch]--;

//             while(requiredCount == 0)
//             {
//                 //start shrinking the window
//                 int currentWindowSize = j - i + 1;

//                 if(minWindowSize > currentWindowSize)
//                 {
//                     minWindowSize = currentWindowSize;
//                     start_i = i;
//                 }
//                 mp[s[i]]++; // increasing the frequency of ith character 

//                 if(mp[s[i]] > 0)
//                     requiredCount++;
//                 i++;
//             }
//             j++;
//         }
//         return minWindowSize == INT_MAX ? "" : s.substr(start_i,minWindowSize);
//     }
// };