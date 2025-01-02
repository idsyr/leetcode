// REWRITE_REWRITE_REWRITE
#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,mmx,sse2,sse3,sse4")
class Solution {
    struct Path{
        unsigned int Y;
        unsigned int X;
        unsigned int length = 0;;
        Path(unsigned int Y_, unsigned int X_, unsigned int length_):Y(Y_), X(X_), length(length_){}
    };
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        static auto _=[](){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);return 0;}();
        if(grid[0][0]==1 || grid[grid.size()-1][grid.size()-1]==1) return -1;
        queue<Path> path; path.push(Path(0,0,1));

        while(!path.empty()){
            if(path.front().Y==grid.size()-1 && path.front().X==grid.size()-1) return path.front().length;

            if(path.front().Y+1<grid.size()&&path.front().X+1<grid.size())
                if(grid[path.front().Y+1][path.front().X+1]==0)
                {path.push(Path(path.front().Y+1, path.front().X+1, path.front().length+1)); grid[path.front().Y+1][path.front().X+1] = 1;}

            if(path.front().Y+1<grid.size())
                if(grid[path.front().Y+1][path.front().X]==0)
                {path.push(Path(path.front().Y+1, path.front().X, path.front().length+1)); grid[path.front().Y+1][path.front().X] = 1;}

            if(path.front().Y+1<grid.size()&&path.front().X-1<grid.size())
                if(grid[path.front().Y+1][path.front().X-1]==0)
                {path.push(Path(path.front().Y+1, path.front().X-1, path.front().length+1)); grid[path.front().Y+1][path.front().X-1] = 1;}

            if(path.front().X-1<grid.size())
                if(grid[path.front().Y][path.front().X-1]==0)
                {path.push(Path(path.front().Y, path.front().X-1, path.front().length+1)); grid[path.front().Y][path.front().X-1] = 1;}

            if(path.front().Y-1<grid.size()&&path.front().X-1<grid.size())
                if(grid[path.front().Y-1][path.front().X-1]==0)
                {path.push(Path(path.front().Y-1, path.front().X-1, path.front().length+1)); grid[path.front().Y-1][path.front().X-1] = 1;}

            if(path.front().Y-1<grid.size())
                if(grid[path.front().Y-1][path.front().X]==0)
                {path.push(Path(path.front().Y-1, path.front().X, path.front().length+1)); grid[path.front().Y-1][path.front().X] = 1;}

            if(path.front().Y-1<grid.size()&&path.front().X+1<grid.size())
                if(grid[path.front().Y-1][path.front().X+1]==0)
                {path.push(Path(path.front().Y-1, path.front().X+1, path.front().length+1)); grid[path.front().Y-1][path.front().X+1] = 1;}

            if(path.front().X+1<grid.size())
                if(grid[path.front().Y][path.front().X+1]==0)
                {path.push(Path(path.front().Y, path.front().X+1, path.front().length+1)); grid[path.front().Y][path.front().X+1] = 1;}

            path.pop();
        }
        return -1;
    }
};
