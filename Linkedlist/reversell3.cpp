// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode * nextt;
//         ListNode * curr = head;
//         ListNode * prev = nullptr;

//         while(curr != nullptr)
//         {
//             nextt  = curr->next;
//             curr->next = prev;

//             prev = curr;
//             curr = nextt;
//         }
//         return prev;
//     }
// };