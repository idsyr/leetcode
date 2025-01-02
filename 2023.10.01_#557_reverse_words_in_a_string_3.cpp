class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        for(int i = 0, sz = s.size(); i<sz; ++i){
            if(s[i]==' '){
                for(int k = temp.size()-1; k>=0; --k){
                    ans+=temp[k];
                } ans+=' ';
                temp = ""; 
            }    
            else{
                temp+=s[i];
            }
        }
        for(int k = temp.size()-1; k>=0; --k){
                    ans+=temp[k];
                }
        return ans;
    }
};
