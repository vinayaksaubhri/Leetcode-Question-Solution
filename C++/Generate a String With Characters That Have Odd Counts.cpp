class Solution {
public:
    string generateTheString(int n) {
        string str(n,'a');
        if(n%2 == 0){
            str[n-1]='b';
        }
       return  str; 
    }
};