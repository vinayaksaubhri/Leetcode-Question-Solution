/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function(arr) {
    arr.sort((a,b) => a-b);
    let min_diff=Number.MAX_VALUE;
    let ans=[];
    
    for(let i=0;i<arr.length;++i){
        let diff=0;
        diff=Math.abs(arr[i+1]-arr[i]);
        if(min_diff >= diff){
            min_diff=diff;
        }
    }
    
    for(let i=0;i<arr.length-1;++i){
        let diff=0;
        diff=Math.abs(arr[i+1]-arr[i]);
        if(diff == min_diff){
            ans.push([arr[i],arr[i+1]]);
        }
    }
return ans;
};