class Solution {
public:

string freqAlphabets(string s){
    string ans="";
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '#'){
            ans+=10*(s[i-2]-'0') + (s[i-1]-'0') + 96;
            i-=2;
            continue;
        }
        ans+=s[i]-'0'+96;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
};