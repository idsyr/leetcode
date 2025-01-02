class Solution {
    #define ll long long
    ll answer = 10000000;
public:
    ll minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int, int>> line1;
        for(int i = 0; i<nums.size(); i++){
            line1.push_back({nums[i], cost[i]});
        }
        sort(line1.begin(), line1.end());

        vector<pair<int, int>> line;
        int privios = -1; int j = -1;
        for(int i = 0; i<nums.size(); i++){
            if(privios==line1[i].first) line[j].second+=line1[i].second;
            else {line.push_back(line1[i]); j++; privios = line[j].first;}
        }
        line1.clear();

        ll add = 0;
        ll start = 0;
        for(int i = 0; i<line.size(); i++){
            add-=line[i].second;
            ll sad = line[i].second;
            sad*=(line[i].first-line[0].first);
            start+=sad;
        }
        answer = start;
        for(int i = 1; i<line.size(); i++){
            add+=line[i-1].second*2;
            start+=add*(line[i].first-line[i-1].first);
            answer = min(answer, start);
        }
        return answer;
    }
};
