class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> dict;
        for(int i = 0, sz = s.size(); i<sz; ++i){
            auto it = dict.find(s[i]); 
            if(it==dict.end()) dict.insert({s[i], 1});
            else ++it->second;
        }
        for(int i = 0, sz = t.size(); i<sz; ++i){
            auto it = dict.find(t[i]);
            if(it==dict.end()) return false;
            if(it->second==0) return false;
            --it->second;
        }
        return true;
    }
};