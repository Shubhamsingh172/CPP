//learn from rohit negi yt coder Army channel

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

class BST
{
    public:
    Node *root;
    BST()
    {
        root = nullptr;
    }
    Node * insertHelper(Node *root, int target)
    {
        if(!root)
        {
            Node *temp = new Node(target);
            return temp;
        }
        if(root->data > target)
            root->left = insertHelper(root->left, target);
        else if(root->data < target)
            root->right = insertHelper(root->right, target);
        
        return root;
    }
    void insert(int val)
    {
        root = insertHelper(root, val);
    }
    void inorder(Node *root)
    {
        if(!root)
            return;
        
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    void inorderTraversal()
    {
        inorder(root);
    }
    void preOrder(Node *root)
    {
        if(!root)
            return;
            
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void preOrderTraversal()
    {
        preOrder(root);
    }
    void postOrder(Node *root)
    {
        if(!root)
            return;
        
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
    void postOrderTraversal()
    {
        postOrder(root);
    }
};

int main() {
    // Write C++ code here
    BST tree;
    int arr[10] = {6,5,1,2,3,8,4,7,9,10};
    for(int i = 0; i < 10; i++)
    {
        tree.insert(arr[i]);
    }
    cout << "Inorder : " << endl;
    tree.inorderTraversal();
    cout << endl;
    cout << "PostOrder : " << endl;
    tree.postOrderTraversal();
    cout << endl;
    cout << "PreOrder : " << endl;
    tree.preOrderTraversal();
    return 0;
}