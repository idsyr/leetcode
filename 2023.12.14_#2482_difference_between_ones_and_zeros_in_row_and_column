class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
int xsz = grid[0].size();
int ysz = grid.size();
vector<int> xo(xsz);
vector<int> yo(ysz);
//vector<vector<int>> ans(ysz, vector<int>(xsz, 0));
for(int y = 0; y<ysz; ++y){
  int sum=0;
  for(int x = 0; x<xsz; ++x){
  if(grid[y][x]==1){++sum;++xo[x];}
}
  yo[y] = sum;
}
for(int y = 0; y<ysz; ++y){

  for(int x = 0; x<xsz; ++x){
grid[y][x] = -xsz+2*xo[x]-ysz+2*yo[y];
}

}      
      
      
return grid;
    }
};
