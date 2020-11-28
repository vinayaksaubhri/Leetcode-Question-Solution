/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let ans=[];
    let max=Math.max(...candies)
    console.log(max);
    for(let i=0;i < candies.length;++i){
        if(candies[i]+extraCandies >= max){
            ans.push(true);
        }else{
            ans.push(false);
        }
    }
    return ans;
};