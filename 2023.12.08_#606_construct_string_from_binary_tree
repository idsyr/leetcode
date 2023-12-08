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
    string ans = "";
public:
    string tree2str(TreeNode* root) {
        ans+=to_string(root->val);
        bool l = root->left==nullptr;
        bool r = root->right==nullptr;
        if(!r||!l) {
            ans+="(";
            if(!l) treestr(root->left);
            ans+=")";
            if(!r){
                ans+="(";
                treestr(root->right);
                ans+=")";
            } 
        }
        return ans;
    }
    void treestr(TreeNode* root) {
        ans+=to_string(root->val);
        bool l = root->left==nullptr;
        bool r = root->right==nullptr;
        if(!r||!l) {
            ans+="(";
            if(!l) treestr(root->left);
            ans+=")";
            if(!r){
                ans+="(";
                treestr(root->right);
                ans+=")";
            } 
        }
    }
};