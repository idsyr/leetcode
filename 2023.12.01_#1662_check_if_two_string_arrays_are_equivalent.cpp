class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0, sz1 = 0, sz2 = 0;
        for(int i = 0, sz = word1.size(); i<sz; ++i){
            sz1+=word1[i].size();}
        for(int i = 0, sz = word2.size(); i<sz; ++i){
            sz2+=word2[i].size();}
        if(sz1!=sz2) return false;
        for(int i = 0; i<sz1; ++i){
            if(x1==word1[y1].size()){++y1; x1=0;}
            if(x2==word2[y2].size()){++y2; x2=0;}
            if(word1[y1][x1]!=word2[y2][x2]) return false;
            ++x1; ++x2;
        }
        return true;
    }
};