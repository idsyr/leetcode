// WRONG_ANSWER
class Solution {
public:
    bool isPowerOfFour(int n) { if(n==1) return true; if(n<1) return false;
        while(n>0){
            if(n<4) return false;
            n%=4;
        } return true;
    }
};
