// RUNTIME_ERROR
class Solution {
public:
    static vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> answer; int carry = 0; int temp; int del; int l = to_string(k).size();
        for(int i =0; i<num.size() || i<l; i++){
            temp=num[num.size()-i-1]+(k%(int)pow(10, i+1))/pow(10, i) + carry;
            carry=temp/10;
            answer.push_back(temp%10);
        }
        if(carry!=0) answer.push_back(1);
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
