class Solution {
public:
    string toLowerCase(string str) {
        for(char &i : str){
            if(i>=65 && i<=90){
                i=i+32;
            }
        }
        return str;
    }
};