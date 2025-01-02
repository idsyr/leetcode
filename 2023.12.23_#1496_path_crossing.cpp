class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> dict; pair<int, int> in({0,0}); int x = 0, y = 0; 
        for(int i = 0, sz = path.size(); i<sz; ++i){
            switch(path[i]){
                case 'N': ++y; break;
                case 'S': --y; break;
                case 'E': ++x; break;
                case 'W': --x; break;
            }
            auto s = dict.find({x, y});
            if(s!=dict.end()) return true;
            dict.insert(in);
            in.first = x; in.second = y;
        } 
        return false;
    }
};