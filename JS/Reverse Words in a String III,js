/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let sentence='',word='';
    for(let ch of s){
        if(ch === ' '){
            sentence += word + ch;
            word='';
        }else{
            word = ch + word;
        }
    }
    return sentence + word;
};