class Solution {
public:
    int balancedStringSplit(string s) {
        int balance=0,ans=0;
        for(auto i : s){
            if('L'== i){
                ++balance;
            }else if('R'== i){
                --balance;
            }
            if(balance==0){
                ++ans;
            }
        }
        return ans;
    }