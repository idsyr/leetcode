class Solution {
    using vvi = vector<vector<int>>;
    using vi = vector<int>;
public:
    vvi imageSmoother(vvi& img) {
        int ysz = img.size(), xsz = img[0].size();
        if(ysz<2&&xsz<2) return img;
        if(ysz<2){
            vi ans(xsz);
            ans[0] = (img[0][0]+img[0][1])/2;
            ans[xsz-1] = (img[0][xsz-1]+img[0][xsz-2])/2;
            for(int i = 1; i<xsz-1; ++i){
                ans[i] = (img[0][i-1]+img[0][i]+img[0][i+1])/3;
            }
            vvi ansi; ansi.push_back(ans);
            return ansi;
        }
        if(xsz<2){
            vvi ans(ysz, vi(1));
            ans[0][0] = (img[0][0]+img[1][0])/2;
            ans[ysz-1][0] = (img[ysz-1][0]+img[ysz-2][0])/2;
            for(int i = 1; i<ysz-1; ++i){
                ans[i][0] = (img[i-1][0]+img[i][0]+img[i+1][0])/3;
            }
            return ans;
        }
        vvi ans(ysz, vi(xsz));
        for(int y = 1, yszi = ysz-1; y<yszi; ++y){
            for(int x = 1, xszi = xsz-1; x<xszi; ++x){
                smoo(img, ans, y, x);
            }
        }
        for(int y = 1; y<ysz-1; ++y){
            smooleft(img, ans, y, 0);
            smooright(img, ans, y, xsz-1);
        }
        for(int x = 1; x<xsz-1; ++x){
            smooup(img, ans, 0, x);
            smoodown(img, ans, ysz-1, x);
        }
        ans[0][0] = (img[0][0]+img[0][1]+img[1][0]+img[1][1])/4;
        ans[ysz-1][0] = (img[ysz-1][0]+img[ysz-2][0]+img[ysz-1][1]+img[ysz-2][1])/4;
        ans[0][xsz-1] = (img[0][xsz-1]+img[1][xsz-1]+img[0][xsz-2]+img[1][xsz-2])/4;
        ans[ysz-1][xsz-1] = (img[ysz-1][xsz-1]+img[ysz-2][xsz-1]+img[ysz-1][xsz-2]+img[ysz-2][xsz-2])/4;
        return ans; 
    }
    
    void smoo(vvi& i, vvi& tmp, int y, int x){
        tmp[y][x] = (i[y-1][x-1]+i[y-1][x]+i[y-1][x+1]+
                     i[y][x-1]  +i[y][x]  +i[y][x+1]+
                     i[y+1][x-1]+i[y+1][x]+i[y+1][x+1])/9;
    }
    void smooup(vvi& i, vvi& tmp, int y, int x){
        tmp[y][x] = (
                     i[y][x-1]  +i[y][x]  +i[y][x+1]+
                     i[y+1][x-1]+i[y+1][x]+i[y+1][x+1])/6;
    }
    void smoodown(vvi& i, vvi& tmp, int y, int x){
        tmp[y][x] = (i[y-1][x-1]+i[y-1][x]+i[y-1][x+1]+
                     i[y][x-1]  +i[y][x]  +i[y][x+1]
                     )/6;
    }
    void smooright(vvi& i, vvi& tmp, int y, int x){
        tmp[y][x] = (i[y-1][x-1]+i[y-1][x]+
                     i[y][x-1]  +i[y][x]  +
                     i[y+1][x-1]+i[y+1][x])/6;
    }
    void smooleft(vvi& i, vvi& tmp, int y, int x){
        tmp[y][x] = (i[y-1][x]+i[y-1][x+1]+
                     i[y][x]  +i[y][x+1]+
                     i[y+1][x]+i[y+1][x+1])/6;
    }
};