// WRONG_ANSWER
class Solution {
    int t = 0;
public:
    bool containsPattern(vector<int>& arr, int m, int k1) {

        for(int i = 0; i<arr.size(); i++)
        {
            for(int k = 0; k<arr.size()-m; k++)
            {
                if(arr[k] == arr[k+m])
                    t++;
                else
                    break;
                if((t/m)>=k1)
                    return true;
            } 
            t = 0;
        }
        return false;
    }
};
