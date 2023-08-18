//call back means to send a function as a arument to another function and with the help of this you can use the function(argument) in the called function as well

const display =(num)=> {
    alert(`Hey so the result is ${num}`);
};
const calc= (num1,num2,display)=>{
    let sum=num1+num2;
    display(sum);
};

calc(20,48,display);