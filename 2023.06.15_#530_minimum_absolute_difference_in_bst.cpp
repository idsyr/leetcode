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
    int m = 100000;
public:
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> q; q.push(root);
        while(!q.empty()){
            getRight(q.front());
            getLeft(q.front());
            if(q.front()->left!=nullptr) q.push(q.front()->left);
            if(q.front()->right!=nullptr)q.push(q.front()->right);
            q.pop();
            if(m==1) break;
        }
        return m;
    }
    void getRight(TreeNode* tec){
        int sval = tec->val;
        if(tec->right==nullptr) return;
        tec=tec->right;
        while(tec->left!=nullptr)
            tec=tec->left;
        m = min(m, abs(sval-tec->val));
    }
    void getLeft(TreeNode* tec){
        int sval = tec->val;
        if(tec->left==nullptr) return;
        tec=tec->left;
        while(tec->right!=nullptr)
            tec=tec->right;
        m = min(m, abs(sval-tec->val));
    }
};
