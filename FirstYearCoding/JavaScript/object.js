
// alert(Students[1] + ' '+Students[0]);

//2d array
//single object

// var Students={
//     name:"Rohit",
//     position : 'Sir',
//     nickname: "Rony"
// }

// alert(Students.name);
// alert(Students.position);
// alert(Students.nickname);

//array object

var Students=[ {
    name:"Rohit",
    position : 'Sir',
    nickname: "Rony"
},
{
    name:"Rohhittt",
    position : 'Student',
    nickname: "Rohit"
}]

console.log(Students[0].nickname);
console.log(Students[1].position);
console.log(Students[1].name);