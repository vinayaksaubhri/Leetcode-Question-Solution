class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int para=0;
        for(auto i : s){
            if(i == '('){
                ++para;
            }else if(i == ')'){
                --para;
            }
            if(ans<para){
                ans=para;
            }
        }
        return ans;
    }
};