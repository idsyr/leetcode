class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        bool m = false, p = false, g = false; int res = 0;
        int i = garbage.size()-1;
        for(; i>0; --i){
            if(m)res+=travel[i-1]; 
            else {m = (garbage[i].find('M')!=garbage[i].npos);if(m)res+=travel[i-1];}
            if(p)res+=travel[i-1]; 
            else {p = (garbage[i].find('P')!=garbage[i].npos);if(p)res+=travel[i-1];}
            if(g)res+=travel[i-1]; 
            else {g = (garbage[i].find('G')!=garbage[i].npos);if(g)res+=travel[i-1];}
            res+=garbage[i].size();
        }
        return res+garbage[0].size();
    }
};