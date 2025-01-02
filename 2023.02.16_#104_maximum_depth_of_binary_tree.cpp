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
    int dep = 0;
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        rec(0, root);
        return dep;
    }
    void rec(int e, TreeNode* t){ e+=1; 
        if(t->left==nullptr && t->right==nullptr) {dep=max(dep, e);return;}
        if(t->left!=nullptr)rec(e, t->left); 
        if(t->right!=nullptr)rec(e, t->right);
    }

};