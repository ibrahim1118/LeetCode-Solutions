class FoodRatings {
    unordered_map<string, set<pair<int, string>>> Rated;
    unordered_map<string, pair<int, string>> mp;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings)
    {
        int n=foods.size();
        for(int i=0; i<n; i++){
            string food=foods[i], cuisine=cuisines[i];
            int rating=ratings[i];
            mp[food]={-rating, cuisine};
            Rated[cuisine].insert({-rating, food});
        }
    }
    
    void changeRating(string food, int newRating) {
        string& cuisine = mp[food].second;
        int i = mp[food].first;
        Rated[cuisine].erase({i, food});
        Rated[cuisine].insert({-newRating, food});
        mp[food]={-newRating, cuisine};
    }
    
    string highestRated(string cuisine) {
        return Rated[cuisine].begin()->second;
    }

};