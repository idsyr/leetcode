class Solution {
public:
    int tribonacci(int n) {
        int dict[38] = {}; dict[0] = 0; dict[1] = 1; dict[2] = 1;
        for(int i = 3; i<=n; ++i){
            dict[i] = dict[i-1]+dict[i-2]+dict[i-3];
        } return dict[n];
    }
};