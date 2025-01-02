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
    int answer = 0;
    int low;
    int high;
public:
    void go(TreeNode* run)
    {
        if(run == nullptr) return;
        if(run->val>=low && run->val<=high)
        {
            answer+=run->val;
            
        }
        go(run->left);
            go(run->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        this->low = low;
        this->high = high;
        TreeNode* run = root;
        go(root);
        return answer;
    }
};







