class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'M')
            {
                answer+=1000;
                continue;
            }
            if(s[i] == 'D')
            {
                answer+=500;
                continue;
            }
            if(s[i] == 'C')
            {
                if(s[i+1] == 'D')
                {
                    answer+=400;
                    i++;
                    continue;
                }
                if(s[i+1] == 'M')
                {
                    answer+=900;
                    i++;
                    continue;
                }
                answer+= 100;
                continue;
            }
            if(s[i] == 'L')
            {
                answer+=50;
                continue;
            }
            
            if(s[i] == 'X')
            {
                if(s[i+1] == 'L')
                {
                    answer+=40;
                    i++;
                    continue;
                }
                if(s[i+1] == 'C')
                {
                    answer+=90;
                    i++;
                    continue;
                }
                answer+= 10;
                continue;
            }
            if(s[i] == 'V')
            {
                answer+=5;
                continue;
            }
            
            if(s[i] == 'I')
            {
                if(i == s.size()-1)
                {
                    answer++;
                    break;
                }  
                if(s[i+1] == 'V')
                {
                    answer+=4;
                    i++;
                    continue;
                }
                if(s[i+1] == 'X')
                {
                    answer+=9;
                    i++;
                    continue;
                }
                answer++;
                continue;
            }
            
        }
        return answer;
    }
};