class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(),candies.end());
        vector<bool>v;
        for(auto i: candies){
            if(i+extraCandies>=max){
                v.push_back(true);
            }else{
                 v.push_back(false);
            }
        }
            candies.clear();
            return v;
    }
};