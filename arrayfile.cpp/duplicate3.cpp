//there can also be different different solutions like using hashmap(unordere_map) or unordered_set or set as well 
//but below is the optimal solution

//   int findDuplicate(vector<int>& nums) {
//         int slow = nums[0];
//         int fast = nums[0];

//         do {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }
//         while (slow != fast);
//         slow = nums[0];
//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
//     }