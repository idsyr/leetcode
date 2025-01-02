// WRONG_ANSWER
class Solution {
    #define ull unsigned long long
    #define ll  long long
    #define vvi vector<vector<int>>
    #define vi vector<int>
    #define $ for
    #define MOD 1000000007
    ull answer = 0;
public:
    int countPaths(vvi& grid) {
        vvi vis(grid.size(), vi(grid[0].size(), 0));
        answer+=grid.size()*grid[0].size();
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(vis[i][j]==0)bfs(grid, vis, i, j);
            }
        }
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                answer+=vis[i][j];
            }
        }

        return answer;
    }
    void bfs(vvi& grid, vvi& vis, int i1, int j1){
        queue<pair<int, int>> q; q.push({i1,j1});
        vector<vector<bool>> uje(grid.size(), vector<bool>(grid[0].size(), false));
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            if(uje[i][j]) goto finish;
            if(i-1>0){
                if(grid[i-1][j]>grid[i][j]){
                    vis[i-1][j] += vis[i][j]+1;
                    q.push({i-1, j});
                }
            }
            if(j+1<grid[0].size()){
                if(grid[i][j+1]>grid[i][j]){
                    vis[i][j+1] += vis[i][j]+1;
                    q.push({i, j+1});
                }
            }
            if(j-1>0){
                if(grid[i][j-1]>grid[i][j]){
                    vis[i][j-1] += vis[i][j]+1;
                    q.push({i, j-1});
                }
            }
            if(i+1<grid.size()){
                if(grid[i+1][j]>grid[i][j]){
                    vis[i+1][j] += vis[i][j]+1;
                    q.push({i+1, j});
                }
            }
            finish:
            uje[i][j] = true;
            q.pop();
        }

    }
};
