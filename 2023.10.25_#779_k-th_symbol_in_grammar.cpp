class Solution {
public:
   int kthGrammar(int n, int c) { 
        int sz = pow(2, n-1); bool t = true; int szp = sz;
        while(szp!=1){szp/=2;if(c>szp) {c-=szp; t=!t;}}
        return (t)?0:1;
    }
};
//           0
//          0 1
//         01 10
