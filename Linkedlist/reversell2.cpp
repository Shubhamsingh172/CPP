// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == nullptr || head->next == nullptr)
//             return head;

//         ListNode *p, *q, *r;
//         p = head;
//         q = p->next;
//         r = q->next;

//         while(q != nullptr)
//         {
//             q->next = p;
//             p = q;
//             q = r;
//             if(q->next != nullptr)
//                 r = q->next;
//         }
//         head = p;
//         return head;
//     }
// };