class Solution {
public:
    int maxProduct(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int a1 = *it; *it = 0;
        it = max_element(nums.begin(), nums.end());
        int a2 = *it;
        return (a1-1)*(a2-1);
    }
};