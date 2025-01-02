class Solution {
    #define MAX 2147483647
    int answer = 0;
public:
    int maxProfit(vector<int>& prices, int fee) {
        int price = 0; int m = MAX; int h = 0;
        for(int i = 0; i<prices.size(); i++){
            if(h==0) m = min(m, prices[i]);
            if(prices[i]>m+fee && prices[i]>h) h = prices[i];
            else if(prices[i]<h-fee) {
                answer+=(h-m-fee);
                m=prices[i];
                h=0;
            }
        }
        if(h!=0)answer+=(h-m-fee);
        return answer;
    }
};
