class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::set<string> starting_cities;
        //insert starting point in the set.
        for(auto points : paths){
        starting_cities.insert(points[0]);
        }
        //check whether the ending point exit or not in the starting point set . if not return it. 
        for(auto points : paths){
            if(starting_cities.count(points[1])==0){
                return points[1];
            }
        }
        return " ";
    }
};