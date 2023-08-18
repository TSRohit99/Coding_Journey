const arr=[1,2,3,4,5,6,7];
 
const redu_arr= arr.reduce((accu,num)=> {
 return accu+num;

},0);
console.log(redu_arr);

//every time function works itstores the return value in accu vari and this reduce method only returns the last value to the main vari we used make sure to intialize the accu value first after the function using , and end with the first bracet


const redu_arr2= arr.reduce((accu,num)=> {
   return accu+(num+5);
 
  },0);
  console.log(redu_arr2);