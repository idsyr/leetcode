#include <iostream>
using namespace std;
class Solution {
public:
    int numOfArrays(int n, int m, int k) {
        if(k>m) return 0;
        if(k==m) return 1;
        int ans = 0;
        int i;
        if(k==1) i=1;
        else i = 2;
        for(; i<=m; ++i){
            ans+=getPartME(i, n-1, k);
            cout<<getPartME(i, n-1, k)<<endl;
        }
        return ans;
    }
    int getPartME(int me, int len, int k){
        int ans = me;
        for(int i = 1; i<k; ++i){
            ans*=me;
        }
        me++;
        for(int i = k; i<len; ++i){
            ans*=me;
        }
        return ans;
    }
};
int main(){
    Solution s;
    s.numOfArrays(2,3,1);
}
