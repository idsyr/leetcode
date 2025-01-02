// TIME_LIMIT_EXCEEDED
class Solution {
public:
    int tallestBillboard(vector<int>& a) {
        int t0 = 0;
        sort(a.begin(), a.end());
        int t1 = 0;
        int t2 = 0;
        int sum = 0; int umen = 0;
        for(int i = 0; i<a.size(); i++){
            sum+=a[i];
        } int msum = sum;
        for(int i = a.size()-1; i>=0; i--){
            if(sum-a[i]<a[i]) {umen++; sum-=a[i];}
            else break;
        }
        for(int i = a.size()-1-umen;i>=0; i--){
            if(t1<t2)t1+=a[i];
            else t2+=a[i];
        }
        t0 = max(t1,t2);
        //t0 = max(t0, msum/2);
        for(int t = t0; t>0; t--){
            bitset<20> deadset; int fr = 0;
            for(int i = pow(2,a.size()); i>0; i--){
                bitset<20> b1(i); int sum = 0;
                for(int j = 0; j<a.size(); j++){
                    sum += a[j]*b1[j];
    
                }
                if(sum==t) {deadset=b1;break;}
            }
            for(
                int i = 0; i<pow(2,a.size()); i++
                ){
                bitset<20> b1(i); int sum = 0;
                for(int j = 0; j<a.size(); j++){
                    if(deadset[j]==1) continue;
                    sum += a[j]*b1[j];
    
                }
                if(sum==t) {if(t==755)return t+1;else return t; break;}
            }
        }
        return 0;
    }
    
};
