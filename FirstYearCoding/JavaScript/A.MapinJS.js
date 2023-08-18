const N_array=[2,3,4,5];

//changing value using forEach

const plus=[];
N_array.forEach((num)=>{
    plus.push(num+1);
});
console.log(plus);

// using Map we will use map from now

const mapArray= N_array.map((num)=> {
    return num+1;
});

mapArray.push(29);
console.log(mapArray);

