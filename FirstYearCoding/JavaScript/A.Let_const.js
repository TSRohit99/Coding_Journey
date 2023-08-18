let a="Hellooo";
console.log(a);
 a="Rohit";
console.log(a);
//we can chamge the value of let type vari but cant change on const type vari


const  c =function(){
    console.log("Function is working");
};
c();

//but we can change the object (const type)

const obj= {
    value:30,
    name: "Rohit",

};

console.log(obj.name);
obj.name="Ronyy";
console.log(obj.name);

// var vs let
// both are same as function. like if we change the var declared any varis value it will change in the function but not in the whole program

// but under any condtion statement var will change the value of any vari in the whole program but let wont let will change it in the braces of if/else

