/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode* lefty, TreeNode* righty)
    {
        if(lefty==NULL||righty==NULL)
        return lefty==righty;
        else return ((lefty->val==righty->val)&&compare(lefty->right,righty->left)&&compare(lefty->left,righty->right));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        else return (compare(root->left,root->right));
        
    }
};