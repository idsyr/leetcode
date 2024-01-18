class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer = 0;
        int i = s.size()-1;
        while(s[i] == ' ')
        {
            i--;
            //if(i<0)
                //return answer;
        }
           
        while(s[i] != ' ')
        {
            i--;
            answer++;
            if(i<0)
                return answer;
        }
        return answer;
    }
};
