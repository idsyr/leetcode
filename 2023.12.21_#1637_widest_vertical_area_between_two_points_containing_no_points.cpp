class Solution {
public:
    struct comp{
        bool operator()(vector<int>& a, vector<int>& b){return a[0] > b[0];}
    };
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        comp c; sort(points.begin(), points.end(), c);
        for(int i = 0, sz = points.size()-1; i<sz; ++i){
            points[i][0]-=points[i+1][0];}
        points[points.size()-1][0] = 0;
        return (*min_element(points.begin(), points.end(), c))[0];
    }
};