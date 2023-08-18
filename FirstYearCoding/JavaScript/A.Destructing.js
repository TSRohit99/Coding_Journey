//Destruction in JS

const car = {

    name : "Ferrari",
    isAutomatic : true,
    isavl: false,
};

//mannually printing
console.log(car.name,car.isAutomatic,car.isavl);

//Destrcuting methods

const{name,isavl,isAutomatic} = car;//we use {} to use multiple variable
console.log(name,isAutomatic,isavl);

//better method function




function printer ({name,isAutomatic,isavl}) {
    console.log(name,isAutomatic,isavl);

};

printer(car); //it sends the object's element as well

