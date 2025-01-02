class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int sz = arr.size();
int tar = sz/4;
int rep = 0;
for(int i = 1; i<sz; ++i){
if(arr[i-1]==arr[i]){++rep; if(rep==tar)return arr[i-1];}
else rep = 0;
}
return arr[sz-1]; 
    }
};
