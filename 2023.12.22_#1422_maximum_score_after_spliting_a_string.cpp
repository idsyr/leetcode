class Solution {
public:
    int maxScore(string s) { int ones = 0; int m = 0; int zeros = 0;
        for(int i = 0, sz = s.size(); i<sz; ++i){
            if(s[i]=='1') ++ones;}
        for(int i = 0, sz = s.size()-1; i<sz; ++i){
            if(s[i]=='1') --ones;
            else ++zeros;
            m = max(ones+zeros, m);
        }
        return m;
    }
};