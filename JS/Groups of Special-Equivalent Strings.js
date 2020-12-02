/**
 * @param {string[]} A
 * @return {number}
 */
var numSpecialEquivGroups = function(A) {
    let set = new Set();
    for( let words of A ){
        let temp =  sort(words);
        set.add(temp);
    }
    return set.size
};    
let sort = function (s){
    let odd='',even='';
    for(let i=0;i<s.length; ++i){
        if(i % 2){
           even += s[i];
         }else{
             odd += s[i];
         }
    }
    even=even.split('').sort().join('');
    odd=odd.split('').sort().join('');
    return even+odd;
}    
