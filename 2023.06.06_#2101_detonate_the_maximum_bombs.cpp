#define ll long long
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        vector<vector<int>> grid(bombs.size());
        for(int i = 0; i<bombs.size(); i++){
            for(int j = 0; j<bombs.size(); j++){
                if(contact(bombs[i], bombs[j])){
                    grid[i].push_back(j);
                }
            }
        }
        int m = 0; int c = 0;
        for(int i = 0; i<bombs.size(); i++){
            vector<bool> visited(bombs.size(), false);
            m = max(m, bfs(i, visited, grid));
        }
        return m;
    }
    bool contact(vector<int>& bomb1, vector<int>& bomb2){
        ll x = bomb1[0]-bomb2[0];
        ll y = bomb1[1]-bomb2[1];
        ll r = bomb1[2];
        if(x*x+y*y<=r*r) return true;
        else return false;
    }
    int bfs(int& i, vector<bool>& visited, vector<vector<int>>& grid){
        int c = 1;
        visited[i] = true;
        for(int nei : grid[i]){
            if(!visited[nei]){
                c+=bfs(nei, visited, grid);
            }
        }
        return c;
    }
};
