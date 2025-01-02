class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0], nums[1]);
        if(nums.size()==2) return max(nums[0]+nums[2], nums[1]);

        int s = nums.size();

        nums[2]+=nums[0];
        for(int i = 3; i<s; i++)
            nums[i]+=max(nums[i-2], nums[i-3]);

        return max(nums[s-1], nums[s-2]);
    }
};