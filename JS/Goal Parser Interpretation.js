/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    let ans = "";
    for(let i=0;i<command.length;){
        if(command[i] == 'G'){
            ans += 'G';
             i+=1;
        }else if(command[i+1]== ')'){
            ans += 'o';
            i+=2;
        }else{
            ans += 'al';
            i+=4;
        }
    }
    return ans;
};