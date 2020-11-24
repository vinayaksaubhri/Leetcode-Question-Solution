class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for(auto i:pieces){
            auto it=find(arr.begin(),arr.end(),i[0]);
            if(it != arr.end()){
                for(auto j: i){
                    if(*it != j)
                        return false;
                    it++;
                }
            }
            else
                return false;
        }
        return true;
    }
};
