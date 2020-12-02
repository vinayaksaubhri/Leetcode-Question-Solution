class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> s;
        for(auto str : A){
            string odd,even;
            for(int i=0;i<str.size();++i){
                if(i % 2){
                    even += str[i];
                }else{
                    odd += str[i];
                }
            }
           sort(even.begin(),even.end());
           sort(odd.begin(),odd.end());
           s.insert(even+odd);
        }
        return s.size();
    }
};