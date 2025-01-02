class Solution {
public:
    string longestPalindrome(string s) { string tmp = "";
        int sz = s.size(); if(sz==1) return s;
        int ans = 0; int l = 0;
        int dict[1001] = {};
        for(int i = 0; i<sz; ++i){
            for(int ai = 0; ai<i; ++ai){
                if(s[i]==s[ai]){
                    if(dict[ai+1]==i-1 || i-ai<3){
                        dict[ai] = i;
                        if(l<i-ai+1){
                            l = i-ai+1; ans = ai;
                        }
                    }
                }
            }
        }
        if(l==0) return tmp+s[0];
        return s.substr(ans, l);
    }
};