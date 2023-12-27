class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, tmp = 0;
        for(int i = 1, sz = colors.size(); i<sz; ++i){
            if(colors[i-1]==colors[i]){
                int a = neededTime[i-1], b = neededTime[i];
                ans += a<b ? a : b; 
                neededTime[i] = a<b ? b : a;
            } 
        }
        return ans;
    }
};