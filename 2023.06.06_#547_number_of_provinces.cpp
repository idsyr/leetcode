class Solution {
    int c = 0;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(), false);
        for(int i = 0; i<isConnected.size(); i++){
            if(visited[i]) continue;
            c++;
            dfs(isConnected, visited, i);
        }
        return c;
    }
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int i){
        visited[i] = true;
        for(int j = 0; j<isConnected[i].size(); j++){
            if(isConnected[i][j]==1 && !visited[j])
            dfs(isConnected, visited, j);
        }
    }
};
