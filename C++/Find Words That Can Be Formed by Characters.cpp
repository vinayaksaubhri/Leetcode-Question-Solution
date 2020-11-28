class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> m;
        for(auto i : chars){
            ++m[i];
        }
        bool flag = true;
        string count = "";
        for(auto ch : words){
            flag=true;
            map<char,int> m2;
            for(auto i : ch){
                ++m2[i];
            }
            for(auto i :ch){
                if(m2[i]>m[i]){
                    flag=false;
                }
            }
            if(flag){
                count += ch;
            }
        }
        return count.size();
    }
};