class Solution {
public:
    int fib(int n) {
        int dict[31] = {}; dict[1] = 1; dict[2] = 1;
        for(int i = 3; i<=n; ++i){
            dict[i] = dict[i-1]+dict[i-2];}
        return dict[n];
    }
};