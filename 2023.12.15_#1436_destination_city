class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> nw; int sz = paths.size();
        for(int i = 0; i<sz; ++i) nw.insert(paths[i][1]);
        for(int i = 0; i<sz; ++i) nw.erase(paths[i][0]);
        return *nw.begin(); 
    }
};