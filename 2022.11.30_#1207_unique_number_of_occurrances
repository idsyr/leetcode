class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> num;
        for(int tec : arr)
        {
            if(auto search = num.find(tec); search!=num.end())
                search->second++;
            else
                num.insert({tec, 1});
        }
        vector<int> rep;
        for(const auto& [key, value] : num)
        {
            for(int i = 0; i<rep.size(); i++)
                if(rep[i] == value)
                    return false;
            rep.push_back(value);
        }
        return true;
    }
};