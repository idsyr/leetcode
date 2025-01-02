class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int xsz = matrix[0].size();
        int ysz = matrix.size();
        vector<vector<int>> ans(xsz, vector<int>(ysz));
        for(int y = 0; y<ysz; ++y){
            for(int x = 0; x<xsz; ++x){
                ans[x][y] = matrix[y][x];
            }
        }      
        return ans;
    }
};