class Solution {
public:
    int MP(int x, int y, vector<vector<int>>& m)
    {return min(m[y][x-1], min(m[y][x], m[y][x+1]));}
    int MPf(int x, int y, vector<vector<int>>& m)
    {return  min(m[y][x], m[y][x+1]);}
    int MPl(int x, int y, vector<vector<int>>& m)
    {return min(m[y][x-1], m[y][x]);}
    int minFallingPathSum(vector<vector<int>>& m) {
        if(m.size() == 1) return m[0][0];
        for(int y = 1; y < m.size(); y++)
        {
            m[y][0]+=MPf(0,y-1,m);
            for(int x = 1; x < m.size()-1; x++)
                m[y][x]+=MP(x,y-1,m);
            m[y][m.size()-1]+=MPl(m.size()-1,y-1,m);
        }
        return *min_element(m[m.size()-1].begin(), m[m.size()-1].end());
    }
};