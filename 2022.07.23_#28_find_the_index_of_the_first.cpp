class Solution {
public:
      int strStr(string haystack, string needle) {
            int answer = -1;
          int start_search;
            for(int i = 0; i<haystack.size(); i++)
            {
                if(haystack[i] == needle[0])
                {
                    start_search = i;
                    int k = 1;
                    for(; k<needle.size(); k++)
                    {
                        i++;
                        if(haystack[i] != needle[k])
                        {
                            k = needle.size()+1;
                        }
                    }
                    if(k == needle.size())
                        return i-k+1;
                    i = start_search;
                }
                
            }
            return answer;
        }
};