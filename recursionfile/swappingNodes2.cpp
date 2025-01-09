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
//     ListNode* swapNodes(ListNode* head, int k) {
//         // Kth node from start
//         // kth node from end i.e (length - k + 1)th node
//         ListNode * node1 = nullptr;
//         ListNode * node2 = nullptr;
//         ListNode * temp = head;
//         while(temp)
//         {
//             if(node2 != nullptr)
//                 node2 = node2->next;
            
//             k--;
//             if(k == 0)
//             {
//                 node1 = temp;
//                 node2 = head;
//             }
//             temp = temp->next;
//         }
//         swap(node1->val,node2->val);
//         return head;
        
//     }
// };