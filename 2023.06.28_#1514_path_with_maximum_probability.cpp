class Solution {
#define vvid vector<vector<pair<int, double>>>

    double answer = 0;
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vvid m(n, vector<pair<int, double>>());
        for(int i = 0; i<edges.size(); i++){
            m[edges[i][0]].push_back({edges[i][1], succProb[i]});
            m[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        vector<bool> vis(n, false);
        bfs(1, m, start, end, vis);
        return answer;
    }
    void dfs(double tecSucc, vvid& m, int tecPos, int end, vector<bool> vis){
        if(tecPos==end) {answer = max(answer, tecSucc); return;}
        vis[tecPos] = true;
        for(pair<int, double> pid : m[tecPos]){
            if(vis[pid.first]==false){
                dfs(tecSucc*pid.second, m, pid.first, end, vis);
            }
        }
    }
    void bfs(double tecSucc, vvid& m, int tecPos, int end, vector<bool> vis){
        vector<double> tecCost(m.size(), -1); tecCost[tecPos] = 1;
        queue<int> q; q.push(tecPos);
        while(!q.empty()){
            if(q.front()==end) {q.pop(); continue;}
            for(pair<int, double> pid : m[q.front()]){
                double a1 = tecCost[q.front()]*pid.second;
                if(a1>tecCost[pid.first]){
                    tecCost[pid.first] = a1;
                    q.push(pid.first);
                }
            }
            q.pop();
        }
        answer = max(tecCost[end], answer);
    }
};
