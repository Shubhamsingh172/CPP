// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         // int k;
//         // for(int i = 0; i < goal.length(); i++)
//         // {
//         //     if(s[0] == goal[i])
//         //     {
//         //         k = i;
//         //         break;
//         //     }
//         // }
//         // k = s.length() - k;
//         // string ss = "";
//         // for(int i = 0; i < s.length(); i++)
//         // {
//         //     ss[i] = s[(i + k) % s.length()];
//         // }

//         // for(int i = 0; i < s.length(); i++)
//         // {
//         //     if(ss[i] != goal[i])
//         //         return false;
//         // }
//         // return true;

//         // soltion 1 with n2 time complexity
//         // for(int i = 0; i < s.length(); i++)
//         // {
//         //     rotate(s.begin(),s.begin() + 1, s.end());
//         //     if(s == goal)
//         //         return true;
//         // }
//         // return false;

//         if (s.length() != goal.length())
//             return false;

//         if ((s + s).find(goal) != string::npos)
//             return true;
//         return false;
//     }
// };