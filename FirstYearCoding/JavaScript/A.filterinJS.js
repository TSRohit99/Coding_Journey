const N_array=[2,3,4,5,6,7,8,9,10];

// filter is used to get the specific item from any array depends on our condition

const FilArray= N_array.filter((num)=> {
    return num>2 && num%2===0;
});

console.log(FilArray);

// Map is used to change all the array but using filter we can filter the array through the conditions