class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ysz = mat.size(), xsz = mat[0].size();
        vector<pair<int, int>> dict;
        vector<int> xd(xsz, 0); vector<int> yd(ysz, 0);
        for(int y = 0; y<ysz; ++y){
            for(int x = 0; x<xsz; ++x){
                if(mat[y][x]==1){
                    dict.push_back({y,x});
                    ++xd[x]; ++yd[y];
                }
            }
        }
        int ans = 0;
        for(pair<int, int>& el : dict){
            if(xd[el.second]==1&&yd[el.first]==1) ++ans;
        }
        return ans;
    }
};