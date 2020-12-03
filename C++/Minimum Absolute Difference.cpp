class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        vector<vector<int>> ans;
        
        
        for(int i=0;i<arr.size()-1;++i){
            int diff=0;
            diff=abs(arr[i+1]-arr[i]);
            if(min_diff>=diff){
                min_diff=diff;
            }
        }
        
        for(int i=0;i<arr.size()-1;++i){
            int diff=0;
            diff=abs(arr[i+1]-arr[i]);
            if(diff == min_diff){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};
