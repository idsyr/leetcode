// WRONG_ANSWER
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int sz = nums.size();
        vector<int>::iterator res = max_element(nums.begin(), nums.end());
        vector<int> predans{*res};
        if(sz==k) return predans;
        --k; 
        vector<int> ans(sz-k, 0);
        queue<pair<int, int>> q; q.push({0, sz});
        while(!q.empty()){
            int pos = 0, val = 0;
            for(int i = q.front().first; i<q.front().second; ++i){
                if(nums[i]>val){val = nums[i]; pos = i;}
            }

            int anspl = max(pos-2*(k-1), 0);
            int anspr = min(sz-k, pos+1);
            for(;anspl<anspr; ++anspl){
                if(ans[anspl]==0)ans[anspl] = val;
            }

            
            if(pos-q.front().first>k && pos>=0)  q.push({q.front().first, pos});
            if(q.front().second-(pos+1)>k && pos+1<sz) q.push({pos+1, q.front().second});
            q.pop();
        }
        ans[sz-k-1] = *max_element(nums.end()-k-1, nums.end());
        ans[0] = *max_element(nums.begin(), nums.begin()+k+1);
        return ans;
    }
};
