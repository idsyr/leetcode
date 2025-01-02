class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int l1 = matrix.size() - 1;
        int l2 = matrix[0].size() - 1;
        if(l1<1) return true;
        
        for(int i = 0; i < l1; i++)
        {
            for(int k = 0; k < l2; k++)
            {
                if(matrix[i][k] != matrix[i+1][k+1]) return false;
            }
        }
        return true;
    }
};
