class Solution {
    #define ll unsigned long long
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> answer(nums.size(), -1);
        if(nums.size()<=k*2) return answer;
        int left = k;
        int right = nums.size()-k;
        ll bef = 0;
        for(int i = 0; i<k*2+1; i++){
            bef+=nums[i];
        }
        answer[left] = bef/(k*2+1);
        for(int i = left+1; i<right; i++){
            bef-=nums[i-k-1];
            bef+=nums[i+k];
            answer[i] = bef/(k*2+1);
        }
        return answer;
    }
};
