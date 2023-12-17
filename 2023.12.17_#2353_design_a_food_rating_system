class FoodRatings {
    unordered_map<string, int> dictF;
    unordered_map<string, vector<unordered_map<string, int>::iterator>> dictC;
public:
    struct comp{
    bool operator()(unordered_map<string, int>::iterator a, unordered_map<string, int>::iterator b){
            if(a->second==b->second) return a->first>b->first;
            return a->second < b->second;
        }
    };
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0, sz = foods.size(); i<sz; ++i){
            dictF.insert({foods[i], ratings[i]});
            auto it = dictC.find(cuisines[i]);
            if(it==dictC.end()) 
                dictC.insert({cuisines[i], vector<unordered_map<string, int>::iterator>()});
            dictC[cuisines[i]].push_back(dictF.find(foods[i]));
        }
        comp c1{};
    }
    
    void changeRating(string food, int newRating) {
        dictF[food] = newRating;
        
    }
    
    string highestRated(string cuisine) {
        comp c1{};
        auto it = max_element(dictC[cuisine].begin(), dictC[cuisine].end(), c1);
        return (*it)->first;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */