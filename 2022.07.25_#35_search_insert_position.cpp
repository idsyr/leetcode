class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int iter;
        int R = size;
        int L = 0;
        for(int i = 0; i<(size/2); i++)
        {
            iter = (R+L)/2;
            if(nums[iter]>target)
                R = iter;
            else
                L = iter;
        }
        for(; L<R; L++)
        {
            if(nums[L] >= target)
                return L;
        }
        return L;
    }
};
