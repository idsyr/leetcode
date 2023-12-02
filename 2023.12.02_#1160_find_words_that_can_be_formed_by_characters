class Solution1 {
public:
    int countCharacters(vector<string>& words, string chars) { int ans = 0;
        for(int i = 0, sz = words.size(); i<sz; ++i){
            string c = chars;
            int k = 0, wsz = words[i].size();
            for( ;k<wsz; ++k){
                string::size_type t = c.find(words[i][k]); 
                if(t==string::npos) break;
                c[t] = '#';
            }
            if(k==wsz) ans+=wsz;
        }
        return ans;
    }
};//40ms 18.1MB
class Solution{
public:
    int countCharacters(vector<string>& words, string chars){ int ans = 0;
        unordered_map<char, int> dict;
        clean(dict, chars);
        for(int i = 0, sz = words.size(); i<sz; ++i){
            int k = 0, wsz = words[i].size();
            for( ;k<wsz; ++k){
                auto f = dict.find(words[i][k]);
                if(f==dict.end()) break;
                if(f->second==0) break;
                --f->second;
            }
            if(k==wsz) ans+=wsz;
            clean(dict, chars);
        }
        return ans;
    }
    void clean(unordered_map<char, int>& dict, string& chars){
        for(char c : chars) dict[c] = 0;
        for(char c : chars) ++dict[c];
    }
};//66ms 15.6MB

