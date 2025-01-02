class Solution {
public:
    int climbStairs(int n) {
        int dict[46] = {}; dict[1] = 1; dict[2] = 2;
        for(int i = 3; i<=n; ++i){
            dict[i] = dict[i-1]+dict[i-2];}
        return dict[n];
    }
};