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
    vector<int> dict;
    int answer = 2147483647;
public:
    int minDiffInBST(TreeNode* root) {
        dict.push_back(root->val);
        rec(root);
        sort(dict.begin(), dict.end());
        for(int i = 1; i<dict.size(); i++){
            answer=min(answer, dict[i]-dict[i-1]);
        }
        return answer;
    }
    void rec(TreeNode* t){
        if(t->left!=nullptr){
            dict.push_back(t->left->val);
            rec(t->left);
        }
        if(t->right!=nullptr){
            dict.push_back(t->right->val);
            rec(t->right);
        }
    }
};