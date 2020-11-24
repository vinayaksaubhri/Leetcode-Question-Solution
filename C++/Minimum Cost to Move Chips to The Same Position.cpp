class Solution {
public:
    /*moving a odd coin to odd place take no money similarly moving even coin to even place also take 0 money so we have to calculate which is minimum odd coin or even coin. And we can return it.*/
    int minCostToMoveChips(vector<int>& position) {
        int odd=0,even=0;
        for(auto i : position){
            i%2 ? ++even : ++odd;
        }  
       return min(odd,even); 
    }
        
};