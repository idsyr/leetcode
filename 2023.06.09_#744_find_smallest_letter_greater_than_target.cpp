class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char answer = letters[0];
        for(int i = 0; i<letters.size(); i++){
            if(letters[i]>target){
                answer = letters[i];
                break;
            }
        }
        return answer;
    }
};
