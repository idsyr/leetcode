class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        maxSum-=n;
        int indexValue = 1;
        int cost = 1;
        int left = index;
        int right = index;
        while(true){
            if(!(left>0) && !(right<n-1)) return indexValue+maxSum/cost;
            maxSum-=cost;
            if(maxSum>=0){
                if(left>0) cost++;
                if(right<n-1) cost++;
                left--; right++;
                indexValue++;
            } else {
                return indexValue;
            }
        }
    }
};
