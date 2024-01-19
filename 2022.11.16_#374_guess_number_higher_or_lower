/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
int FFS(int l, int r)
    {
    if(r-l<2)
    {
        if(guess(l)==0)
            return l;
        if(guess(r)==0)
            return r;
    }
        int center = ((long)l+(long)r)/2;
        int check = guess(center);
        if(check == 1)
            return FFS(center, r);
        if(check == -1)
            return FFS(l, center);
        if(check == 0)
            return center;
        return 111;
    }
    int guessNumber(int n) {
        return FFS(1, n);
    }
};