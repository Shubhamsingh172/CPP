// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         for(int i = 0; i < 20; i++)
//         {
//             if(pow(4, i) == n)
//                 return true;
//         }
//         return false;
//     }
// };

// also second solution 
// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n<=0 || n%2==0)
//            return false;
//         else if(n==1) return true;
//         int power=pow(4,15);
//         return (power%n==0);
//     }
// };