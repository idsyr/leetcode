class Solution {
    vector<vector<int>> comb;
    bool found = false;
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        for(int i1 = 0; i1<points.size(); i1++)
        {
            for(int i2 = 0; i2<comb.size(); i2++)
            {
                if(comb[i2][0]>points[i1][1] || comb[i2][1]<points[i1][0])
                    continue;
                else{
                    found = true;
                    if(comb[i2][0]<=points[i1][0]){
                        if(comb[i2][1]>=points[i1][1]){
                            comb[i2][1] = points[i1][1];
                            comb[i2][0] = points[i1][0];
                        }
                        else
                            comb[i2][0] = points[i1][0];  
                    }
                    else
                        if(comb[i2][1]>=points[i1][1])
                            comb[i2][1] = points[i1][1];
                    break;
                }
            }
            if(!found) comb.push_back(points[i1]);
            found = false;
        }
        return comb.size();
    }
};