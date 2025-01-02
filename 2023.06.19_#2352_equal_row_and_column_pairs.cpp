class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int answer = 0;
        for(int row = 0; row<grid.size(); row++){
            for(int col = 0; col<grid.size(); col++){
                int i = 0;
                for(; i<grid.size(); i++){
                    if(grid[i][col]!=grid[row][i]) break;
                }
                if(i==grid.size())answer++;
            }
        }
        return answer;
    }
};
