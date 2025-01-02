class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        auto m1it = min_element(prices.begin(), prices.end());
        int m1 = *m1it;
        *m1it =  1000000;
        int m2 = *min_element(prices.begin(), prices.end());
        if(m1+m2>money) return money; else return money-m1-m2;
    }
};