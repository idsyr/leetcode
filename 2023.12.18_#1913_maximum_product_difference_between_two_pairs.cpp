class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
auto bit = max_element(nums.begin(), nums.end());
auto sit = min_element(nums.begin(), nums.end());
int s1 = *sit;
int b1 = *bit;
*bit = s1;
int b2 = *max_element(nums.begin(), nums.end());
*bit = b1;
*sit = b1;
int s2 = *min_element(nums.begin(), nums.end());
return (b1*b2)-(s1*s2);
    }
};
