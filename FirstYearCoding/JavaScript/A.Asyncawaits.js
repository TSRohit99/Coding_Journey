//important bro
function makeRequest(location){
    return new Promise((resolve,reject)=> {
        console.log(`Making request to ${location}`)
        if(location==='Google')
            resolve(`Google is here`);
            else
             reject(`We can call google only!!`);

    })
}

function Processing(response) {
    return new Promise((resolve,reject)=>{
        console.log('Processing response...')
        resolve (`And Successfully ${response}`)
    })
};

// //using promises 
// makeRequest('Googlee').then((response)=>{
//     console.log('Responsee Received.')
//     return Processing(response)
// }).then((processedResponse)=> {
//     console.log(processedResponse)
// }).catch(err =>{
//     console.log(err)
// })

async function doWork(name){

  try { const response = await makeRequest(name)
    console.log(`Processing your request`)
    const processedResponse= await Processing(response)
    console.log(processedResponse)
    }catch(err) { 
        console.log(err)
    }


}  

doWork('Google');

