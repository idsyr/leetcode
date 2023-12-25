class Solution {
public:
    int numDecodings(string s) { s+=-1*'9';
    int ans = 1;
    int n = 0;
        if(s[0]=='0') return 0;
        vector<int> dict; dict.push_back(1); dict.push_back(1); dict.push_back(2);
        for(int i = 3; i<46; ++i) dict.push_back(dict[i-1]+dict[i-2]);
        char pre = s[0];
        for(int i = 1, sz = s.size(); i<sz; ++i){
            if(s[i]=='0') if(pre=='0') return 0;
            pre = s[i];
        }
        for(int i = 0, sz = s.size()-1; i<sz; ++i){ ++n;
            if(s[i+1]=='0'){if(s[i]>'2') return 0;
                ans*=dict[n-1]; n=0; i+=1; continue;}
            if((s[i]-'0')*10+(s[i+1]-'0')>26){ans*=dict[n]; n=0; continue;}
        } if(n>0)ans*=dict[n];
        return ans;
    }
};
//1 2 3 5 8 13 21 34 55
//2147483647