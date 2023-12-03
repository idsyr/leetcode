class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        if(nums.size()==1) return 0;
        sort(nums.begin(), nums.end());
        int lvl = 0; int ans = 0;
        for(int i = 1, sz = nums.size(); i<sz; ++i){
            if(nums[i-1]<nums[i]) ++lvl;
            ans+=lvl;
        }
        return ans;
    }
};