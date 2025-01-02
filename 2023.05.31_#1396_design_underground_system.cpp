class UndergroundSystem {
    unordered_map<int, pair<string, int>> goes;
    unordered_map<string, pair<double, int>> timing;
public:
    UndergroundSystem() {

    }

    void checkIn(int id, string stationName, int t) {
        goes.insert({id, {stationName, t}});
    }

    void checkOut(int id, string stationName, int t) {
        unordered_map<int, pair<string, int>>::iterator path = goes.find(id);
        unordered_map<string, pair<double, int>>::iterator thisTiming = timing.find(path->second.first+" "+stationName);
        if(thisTiming==timing.end()){
            timing.insert({path->second.first+" "+stationName, {static_cast<double>(t-path->second.second), 1}});
        } else {
            thisTiming->second.first+=static_cast<double>(t-path->second.second); thisTiming->second.second++;
        }
        goes.erase(path);
    }

    double getAverageTime(string startStation, string endStation) {
        unordered_map<string, pair<double, int>>::iterator thisTiming = timing.find(startStation+" "+endStation);
        return thisTiming->second.first/thisTiming->second.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
