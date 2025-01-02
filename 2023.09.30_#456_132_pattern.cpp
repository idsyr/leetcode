// TIME_LIMIT_EXCEEDED
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int sz = nums.size(); if(sz<3) return false;
        int tmin = nums[0], tmax, tavg, rmin; int i = 1;
        vector<int> dict;
        for(; i<sz; ++i){
            if(tmin>nums[i]) {tmin = nums[i]; continue;}
            if(tmin<nums[i]) {tmax = nums[i]; break;}
        } rmin = tmin;
        for(; i<sz; ++i){
            if(nums[i]>tmax) {tmax = nums[i]; tmin = rmin; continue;}
            if(nums[i]<rmin) {rmin = nums[i]; dict.push_back(i); continue;}
            if(nums[i]>tmin && nums[i]<tmax) return true;
        }
        for(int k : dict){
            if(find(nums, k)) return true;
        }
        return false;
    }
    bool find(vector<int>& nums, int k) {
        int sz = nums.size(); if(sz<3) return false;
        int tmin = nums[0], tmax, tavg, rmin; int i = k;
        vector<int> dict;
        for(; i<sz; ++i){
            if(tmin>nums[i]) {tmin = nums[i]; continue;}
            if(tmin<nums[i]) {tmax = nums[i]; break;}
        } rmin = tmin;
        for(; i<sz; ++i){
            if(nums[i]>tmax) {tmax = nums[i]; tmin = rmin; continue;}
            if(nums[i]<rmin) {rmin = nums[i]; continue;}
            if(nums[i]>tmin && nums[i]<tmax) return true;
        }
        return false;
    }
};
