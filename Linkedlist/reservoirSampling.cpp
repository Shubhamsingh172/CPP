// linked list random node problem using reservoir sampling method
// class Solution {
// public:
//     ListNode * Head;
//     Solution(ListNode* head) {
//        Head = head;
//     }
//     int getRandom() {
//         ListNode *temp = Head;
//         int count = 1;
//         int result = 0;

//         while(temp != nullptr)
//         {
//             if(rand() % count < 1.0/count)
//             {
//                 result = temp->val;
//             }
//             count++;
//             temp = temp->next;
//         }
//         return result;
//     }
// };

// /**
//  * Your Solution object will be instantiated and called as such:
//  * Solution* obj = new Solution(head);
//  * int param_1 = obj->getRandom();
//  */