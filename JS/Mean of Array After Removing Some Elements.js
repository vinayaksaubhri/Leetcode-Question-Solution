var trimMean = function(arr) {
    arr.sort((a,b) => a-b);
    let remove_position = (0.05)*arr.length;
    let start =remove_position;
    let end= arr.length-remove_position;
    let sum=0;
    let remaining_size = arr.length - (2*remove_position);
    for(let i=start ; i<end ; ++i ){
        sum += arr[i];
    }
    let mean = sum/remaining_size;
    return mean;
};