class Solution {
public:
    int minOperations(string s) {
        bool tec = (s[0]=='1'); 
        int ans = 0, sz = s.size();
        for(int i = 0; i<sz; ++i){
            if(tec==(s[i]=='0')) ans++; 
            tec=!tec;
        }
        return min(ans, sz-ans);
    }
};