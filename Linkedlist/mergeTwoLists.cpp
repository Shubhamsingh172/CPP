// ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
// //         if (l1 == nullptr)
// //             return l2;

// //         if (l2 == nullptr)
// //             return l1;

// //         if (l1->val < l2->val)
// //         {
// //             // here we use recursion concept to solve as far
// //             l1->next = mergeSortedLists(l1->next, l2);
// //             return l1;
// //         } 
// //         else 
// //         {
// //             // here we use recursion concept to solve as far
// //             l2->next = mergeSortedLists(l1, l2->next);
// //             return l2;
// //         }
// //         return nullptr;
// //     }