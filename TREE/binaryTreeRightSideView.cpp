// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root == nullptr)
//             return {};
            
//         queue<TreeNode*>que;
//         que.push(root);
//         vector<int>result;
//         while(!que.empty())
//         {
//             int n = que.size();
//             TreeNode *node = nullptr;
//             while(n--)
//             {
//                 node = que.front();
//                 que.pop();

//                 if(node->left != nullptr)
//                     que.push(node->left);
//                 if(node->right != nullptr)
//                     que.push(node->right);
//             }
//             result.push_back(node->val);
//         }
//         return result;
//     }
// };