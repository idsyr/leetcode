class Solution {
public:
    bool winnerOfGame(string colors) {
        int a = 0, b = 0, ai = 0, bi = 0;
        for(int i = 0, sz = colors.size(); i<sz; ++i){
            if(colors[i]=='A'){
                bi = 0;
                ai+=1;
                if(ai>2) a++;
            }
            if(colors[i]=='B'){
                ai = 0;
                bi+=1;
                if(bi>2) b++;
            }
        }
        return a>b;
    }
};
