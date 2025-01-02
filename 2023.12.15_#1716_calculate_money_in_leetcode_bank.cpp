class Solution {
public:
    int totalMoney(int n) { int sum = 0;
        for(int i = 0; i<n; ++i) for(int k = 1; k<8&&i*7+k<=n; ++k) sum+=i+k;
        return sum;
    }
};