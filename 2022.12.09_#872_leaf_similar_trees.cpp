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
    vector<int> a;
    int i = 0;
    bool answer= true;
public:
    void run235(TreeNode* run)
    {
        if(run->left!=nullptr)
            run235(run->left);
        if(run->right!=nullptr)
            run235(run->right);
        else if(run->left==nullptr)
            a.push_back(run->val);

    }
    void run236(TreeNode* run)
    {
        if(run->left!=nullptr)
            run236(run->left);
        if(run->right!=nullptr)
            run236(run->right);
        else if(run->left==nullptr)
            {
                if(i<=a.size()&&run->val!=a[i])
                {
                    answer = false;
                    return;
                }
                i++;
            }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        run235(root1);
        run236(root2);
        if(i<a.size()) return false;
        return answer;
    }
};