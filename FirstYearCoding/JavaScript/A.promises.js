
let pass=true;



const p = new Promise ((resolve,reject)=>{
        if(pass){
            resolve("You are passed");
        } else {
            reject("You are failed");
        }

});

//.then works when promise resolves
p.then((res)=>console.log(res));


const Done_JS = new Promise ((resolve,reject) =>{
    resolve("JS is done properly") ;
});
const Done_AJS = new Promise ((resolve,reject) =>{
    resolve("Adavace JS is done properly");
});

//it will print all promises
Promise.all([
    Done_JS,
    Done_AJS
]).then((massages)=> {
    console.log(massages);
} );
//it will print the best responseded promises
Promise.race([
    Done_JS,
    Done_AJS
]).then((massage)=> {
    console.log(massage);
} );