// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
//         if (l1 == nullptr)
//             return l2;

//         if (l2 == nullptr)
//             return l1;

//         if (l1->val < l2->val)
//         {
//             // here we use recursion concept to solve as far
//             l1->next = mergeSortedLists(l1->next, l2);
//             return l1;
//         } 
//         else 
//         {
//             // here we use recursion concept to solve as far
//             l2->next = mergeSortedLists(l1, l2->next);
//             return l2;
//         }
//         return nullptr;
//     }
//     ListNode* partitionAndMerge(int start, int end, vector<ListNode*>& lists)
//     {
//         if (start > end) // here we use like recursive binary search i think probably it right
//             return nullptr;

//         if (start == end)
//             return lists[start];

//         int mid = start + (end - start) / 2;

//         ListNode* l1 = partitionAndMerge(start, mid, lists);
//         ListNode* l2 = partitionAndMerge(mid + 1, end, lists);

//         return mergeSortedLists(l1, l2); // here we use recursion concept to solve as far
//     }
//     ListNode* mergeKLists(vector<ListNode*>& lists)
//     {
//         int k = lists.size();

//         if (k == 0)
//             return nullptr;

//         return partitionAndMerge(0, k - 1, lists);
//     }
// };