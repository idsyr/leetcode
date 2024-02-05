class Solution {
public:
    int firstUniqChar(string s) {
        int dict[52]{}; int ans = 100001;
        for(int i = 0, sz = s.size(); i<sz; ++i){
            ++dict[(s[i]-97)*2];
            dict[(s[i]-97)*2+1] = i;}
        for(int i = 0; i<52; i+=2){
            if(dict[i]==1) ans = min(ans, dict[i+1]);}
        return ans==100001? -1 : ans;
    }
};
//97 122 26
