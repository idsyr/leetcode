class Solution {
public:
   struct point{
        int x;
        int y;
        point(int x_, int y_): x(x_), y(y_) {}
    };
    int rec_size(point lb, point ru)
    {
        int answer = (ru.x-lb.x)*(ru.y-lb.y);
        return answer;
    }
    bool between(point& border1, point betw, point& border2)
    {
        if(betw.x >= border1.x && betw.y >= border1.y && betw.x <= border2.x && betw.y <= border2.y)
            return true;
        return false;
    }

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
{


    point a1(ax1, ay2);
            point a2(ax2, ay2);
            point a3(ax2, ay1);
            point a4(ax1, ay1);

            point b1(bx1, by2);
            point b2(bx2, by2);
            point b3(bx2, by1);
            point b4(bx1, by1);

            bool b1in = between(a4, b1, a2);
            bool b2in = between(a4, b2, a2);
            bool b3in = between(a4, b3, a2);
            bool b4in = between(a4, b4, a2);
            bool cent = between(a4,point((bx1+bx2)/2, (by1+by2)/2),a2);
            if(b1in || b2in || b3in || b4in || cent)
            {
                int comb = rec_size(point(max(ax1, bx1),max(ay1,by1)), point(min(ax2,bx2),min(ay2,by2)));
                if(comb<0) comb = 0;
                return rec_size(a2,a4) + rec_size(b2, b4) - comb;
            }
            return rec_size(a2,a4) + rec_size(b2, b4);
}
};