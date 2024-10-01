class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> dict(k*2, 0);
        for(int i = 0, sz = arr.size(); i<sz; ++i){
            int searchable = arr[i]%k;
            int target1 = (searchable>0)? k - searchable : -k - searchable;
            int target2 = -searchable;

            target1+=k; target2+=k; searchable+=k;

            if(dict[target1]!=0){
                --dict[target1];
                continue;
            }

            if(dict[target2]!=0){
                --dict[target2];
                continue;
            }

            ++dict[searchable];
        }
        for(int i = 0, sz = dict.size(); i<sz; ++i){
            if(dict[i]!=0) return false;
        }
        return true;
    }
};
