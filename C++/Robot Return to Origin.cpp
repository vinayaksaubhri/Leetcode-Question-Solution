class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical_length=0,horizontal_length=0;
        for(auto ch:moves){
           switch(ch){
               case 'U': {
                   ++vertical_length;
                   break;
               }
               case 'D': {
                       --vertical_length;
                       break;
                   }
               case 'R': {
                   ++horizontal_length;
                   break;
               }
               case 'L': {
                   --horizontal_length;
                   break;
               }
          }
        }
    if(vertical_length == 0 and horizontal_length == 0){
        return true;
    }else{
        return false;
    }
    }
};