/**
 * @param {number[][]} accounts
 * @return {number}
 */ 
var maximumWealth = function(accounts) {
    let maximum=0;
    for(let i=0;i<accounts.length;++i){
        let sum=0;
        for(let j=0;j<accounts[i].length;++j){
            sum += accounts[i][j];
        }
       maximum=Math.max(sum,maximum); 
    }
   return maximum; 
};