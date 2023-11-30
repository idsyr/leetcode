class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 0;
        int temp = -101;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] != temp)
            {
                temp = nums[i];
                nums[pos] = temp;
                pos++;
            }
        }
        return pos;
    }
};