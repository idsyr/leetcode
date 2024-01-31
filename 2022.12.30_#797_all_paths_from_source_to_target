class Solution {
    using vvi = vector<vector<int>>;
    using vi = vector<int>;
    vvi answer;
    int target;
public:
    void push(vvi& graph, vi local, int jmp)
    {
        local.push_back(jmp);
        if(jmp==target)
            answer.push_back(local);
        for(int i = 0; i<graph[jmp].size(); i++)
            push(graph, local, graph[jmp][i]);
    }
    vvi allPathsSourceTarget(vvi& graph) {
        target = graph.size()-1;
        vi local;
        local.push_back({0});
        for(int i = 0; i<graph[0].size(); i++)
            push(graph, local, graph[0][i]);
        return answer;
    }
};