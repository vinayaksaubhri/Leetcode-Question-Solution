class Solution {
public:
    string sortString(string s) {
    string ans;
    int count[26]={0}; // to  count the number of occurence of each letter.
       for(auto i : s){
           ++count[i-'a'];
       }
    while(ans.size()<s.size()){
        for(int i=0;i<26;i++){ //concatinate each digit in ascending order 
            if(count[i]){
            ans += i+'a';
            --count[i];
        }
    }     
        for(int i=25;i>=0;i--){ //concatinate each digit in descending order.
            if(count[i]){  
            ans += i+'a';
            --count[i];
        }
    }