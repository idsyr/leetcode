class Solution {
    vector<string> answer;
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return answer;
        int temp = nums[0];
        for(int i = 1; i< nums.size(); i++){
            if(nums[i-1]+1!=nums[i]) {
                if(temp!=nums[i-1])
                answer.push_back(to_string(temp)+"->"+to_string(nums[i-1]));
                else
                answer.push_back(to_string(temp));
                temp=nums[i];
            }
        }
        if(temp!=nums[nums.size()-1])
                answer.push_back(to_string(temp)+"->"+to_string(nums[nums.size()-1]));
                else
                answer.push_back(to_string(temp));
        return answer;
    }
};
