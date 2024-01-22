class Solution {
public:
int mySqrt(int x) {
    if(x==0) return 0;
    srand(time(nullptr));
    int lres = rand()%x;
    if(lres==0) lres = 1;
    int nres = 0;
    for(int i = 0; i<20;i++)
    {
        nres = (lres+x/lres)/2;
        if(nres==lres) return nres;
        lres = nres;
    }
    if((x/nres)-nres<0)
        return nres-1;
    else return nres;
}
};