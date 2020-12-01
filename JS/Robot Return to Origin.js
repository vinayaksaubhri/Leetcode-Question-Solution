var judgeCircle = function(moves) {
    let horizontal_length=0,vertical_length=0;
    for(let i=0;i<moves.length;++i){
        switch(moves[i]){
            case 'U':{
                ++vertical_length;
                break;
            }
            case 'D':{
                --vertical_length;
                break;
            }
            case 'L':{
                --horizontal_length;
                break;
            }
            case 'R':{
                ++horizontal_length;
                break;
            }
        }
    }
   return horizontal_length === 0 && vertical_length === 0
 
};