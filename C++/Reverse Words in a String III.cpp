class Solution {
public:
    string reverseWords(string s) {
             for(int i=0;i<s.length();++i){
             if(s[i] != ' '){
                 int j;
                 for(j=i+1;j<s.length();++j){
                     if(s[j] == ' '){
                         break;
                     }
                 }
                 reverse(s.begin()+i,s.begin()+j);
                 i=j;
             }
         }
        return s;
    }
};