class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int szv = words.size(); if(szv<2)return true;
        unordered_map<char, int> dict;
        for(int i = 97; i<123; ++i) dict.insert({i, 0});     
        for(int v = 0; v<szv; ++v)
            for(int i = 0, sz = words[v].size(); i<sz; ++i)
                ++dict.find(words[v][i])->second;
        for(auto &r : dict)
            if(r.second%szv!=0) return false;
        return true;
    }
};