class Solution {
public:
    int fib(int n){
        int ans = 0;
        while(n>0){
            ans+=n;
            --n;
        }
        return ans;
    }
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end()); int stk = 0, ans = 0;
        for(int i = 1, sz = nums.size(); i<sz; ++i){
            if(nums[i]==nums[i-1]) stk++;
            else{ans+=fib(stk);stk=0;}
        }ans+=fib(stk);
        return ans;
    }
};
