class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=0;
        for(auto acc : accounts){
            int sum=0;
            for(auto i : acc){
                sum += i;
            }
           maximum=max(maximum,sum); 
        }
       return maximum; 
    }
};