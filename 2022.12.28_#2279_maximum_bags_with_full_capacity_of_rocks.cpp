class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        //sort(capacity.begin(), capacity.end());
        //sort(rocks.begin(), rocks.end());
        vector<int> carry;
        // for(int i = rocks.size()-1; i>=0; i--)
        // {
        //     for(int k = 0; k<capacity.size(); k++)
        //     {
        //         if(capacity[k]<rocks[i])
        //             continue;
        //         carry.push_back(capacity[k]-rocks[i]);
        //         capacity[k] = 0;
        //         break;
        //     }
        // }
        for(int i = 0; i<capacity.size(); i++)
        {
            int temp = capacity[i]-rocks[i];
            carry.push_back(temp);
        }
        sort(carry.begin(), carry.end());
        int answer = 0;
        for(int i = 0; i<carry.size(); i++)
        {
            if(additionalRocks>=carry[i])
            {
                additionalRocks-=carry[i];
                answer++;
            }
        }
        return answer;
    }
};