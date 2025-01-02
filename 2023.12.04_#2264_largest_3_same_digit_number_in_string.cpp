class Solution {
public:
    string largestGoodInteger(string num) {
        for(string sdn : {"999","888","777","666","555","444","333","222","111","000"}){
            if(num.find(sdn)!=string::npos) return sdn;
        }
        return "";
    }
};