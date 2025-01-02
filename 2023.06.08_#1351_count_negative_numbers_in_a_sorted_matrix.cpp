class Solution {
    int c = 0;
public:
    int countNegatives(vector<vector<int>>& grid) {
        int pos = 0;
        for(int i = grid.size()-1; i>=0; i--){
            for(int j = pos; j<grid[i].size(); j++){
                if(grid[i][j]<0){
                    pos = j;
                    c += grid[i].size()-j;
                    break;
                }
            }
        }
        return c;
    }
};
