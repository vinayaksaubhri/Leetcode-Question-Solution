class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();){
            if(command[i]=='G'){
                ans += 'G';
                ++i;
            }else if(command[i+1] == ')'){
                ans += 'o';
                ++++i;
            }else{
                ans += "al";
                ++++++++i;
            }
        }
        return ans;
    }
};