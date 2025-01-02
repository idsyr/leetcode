class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int answer = 0;
        int alt = 0;
        for(int i = 0; i<gain.size(); i++){
            alt+=gain[i];
            answer = max(answer, alt);
        }
        return answer;
    }
};
