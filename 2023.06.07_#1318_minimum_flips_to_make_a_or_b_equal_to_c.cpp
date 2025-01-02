class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<32> a1(a); bitset<32> b1(b); bitset<32> c1(c); int flip = 0;
        for(int i = 0; i<32; i++){
            if(c1[i]==1){
                if(a1[i]==0 && b1[i]==0) flip++;
            }
            if(c1[i]==0){
                if(a1[i]==1) flip++;
                if(b1[i]==1) flip++;
            }
        }
        return flip;
    }
};
