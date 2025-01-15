// class Solution {
// public:
//     int prefixCount(vector<string>& words, string pref) {
//         int count = 0;
//         for (int i = 0; i < words.size(); i++) {
//             if (words[i].compare(0, pref.length(), pref) == 0)
//                 count++;
//         }
//         return count;

        // another solution
        //     int prefixCount(vector<string>& words, string pref) {
        //     int count = 0;
        //     int prefLength = pref.length();

        //     for (const string& word : words) {
        //         if (word.substr(0, prefLength) == pref) {
        //             count++;
        //         }
        //     }

        //     return count;
        //  }
    // }
// };