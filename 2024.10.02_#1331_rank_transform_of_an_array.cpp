class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int sz = arr.size();
        if(sz==0)return arr;

        vector<int> temp(arr);
        sort(temp.begin(), temp.end());

        unordered_map<int, int> dict; 
        int rank = 1; 
        dict.insert({temp[0], rank});

        for(int i = 1; i<sz; ++i){
            dict.insert({temp[i], (temp[i] == temp[i-1])? rank : ++rank});
        }

        for(int i = 0; i<sz; ++i){
            temp[i] = dict[arr[i]];
        }

        return temp;
    }
};

// TODO: check comparator idea 
