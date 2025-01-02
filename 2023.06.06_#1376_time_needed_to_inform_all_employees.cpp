class Solution {
    int time = 0;
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> g(manager.size());
        for(int i = 0; i<manager.size(); i++){
            if(manager[i]!=-1){
                g[manager[i]].push_back(i);
            }
        }
        return dfs(g,informTime,headID);
    }
    int dfs(vector<vector<int>>& g, vector<int>& informTime, int i){
        int c = informTime[i];
        int add = 0;
        for(int j= 0; j<g[i].size(); j++){
            add = max(add, dfs(g, informTime, g[i][j]));
        }
        return c+add;
    }
};
