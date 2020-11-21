class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       std::unordered_map<string,int> map;
        string alphabet[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto str : words ){
            string temp = "";
            for(auto ch : str){
            temp += alphabet[(int)(ch -'a')];
           }    
            map[temp] += 1;
        }
        return map.size();
    }
};