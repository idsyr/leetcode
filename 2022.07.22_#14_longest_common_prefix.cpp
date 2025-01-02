class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        char tec;
        int min_strs = strs[0].size();
        for(auto &item : strs)
        {
            min_strs = min(min_strs, (int)item.size());
        }
        for(int i = 0; i<min_strs; i++)
        {
            tec = strs[0][i];
            for(auto &item : strs)
            {
                if(item[i] == tec)
                    continue;
                else
                    return answer;
            }
            answer += tec;
        }
        return answer;
    }
};