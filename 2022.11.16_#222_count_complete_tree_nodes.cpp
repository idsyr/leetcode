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
    TreeNode* get(TreeNode* root, int pos)
    {
        TreeNode* run = root;
        vector<int> binPos;
       while(pos > 1)
       {
           binPos.push_back(pos%2);
           pos = pos/2;
       }
       for(int i = binPos.size()-1; i>=0; i--)
       {
            if(binPos[i] == 1)
                run = run->right;
            else
                run = run->left;
       }
       return run;
    }

    int countNodes(TreeNode* root) {
        if(root == nullptr) return 0;
        
        TreeNode* run = root;
        int h = 0;
        while(run != nullptr)
        {
            h++;
            run = run->left;
        }
        int w = pow(2, h);
        int size = w-1;

        int center = pow(2, h-1);
        for(int i = 2; i<=h;i++)
        {
            if(get(root, size - center)==nullptr)
                center = center + pow(2, h-i);
            else
                center = center - pow(2, h-i);
        }
        if(get(root, size - center +1)!=nullptr)
            size++;
        if(get(root, size - center)==nullptr)
            size--;
        return size - center;

    }
};







