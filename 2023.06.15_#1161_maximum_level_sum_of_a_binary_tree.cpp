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
    vector<int> sums;
public:
    int maxLevelSum(TreeNode* root) {
        deep(root, 0);
        vector<int>::iterator pos = max_element(sums.begin(), sums.end());
        return distance(sums.begin(), pos)+1;
    }
    void deep(TreeNode* tec, int level){
        if(sums.size()==level)sums.push_back(tec->val);
        else sums[level]+=tec->val;
        level++;
        if(tec->left !=nullptr)deep(tec->left,  level);
        if(tec->right!=nullptr)deep(tec->right, level);
    }
};
