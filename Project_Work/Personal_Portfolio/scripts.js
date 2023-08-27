// .........Landing page Animation............


var typed = new Typed('#element', {
    strings: ['Jr. Web Dev', 'Community Builder', 'TG Project Manager', 'Marketer'],
    typeSpeed: 100,
    backSpeed: 50,
    loop: true,
});


// ........on About section Skills, experience, education displayer.......


var tablinks = document.getElementsByClassName("tab-links");
var tabcontents = document.getElementsByClassName("tab-contents");
function opentab(tabname) {
    for (tablink of tablinks) {
        tablink.classList.remove("active-link");
    }
    for (tabcontent of tabcontents) {
        tabcontent.classList.remove("active-tab");
    }
    event.currentTarget.classList.add("active-link");
    document.getElementById(tabname).classList.add("active-tab");
}

// ..............Connecting sheet to forms...........


const scriptURL= 'https://script.google.com/macros/s/AKfycbxrX6M71ntOlrKRY62RlIYVQimNTMN8xtp7ZqA2q2fjpaXWLX3AK5Ve897jJImzoJE/exec'

const form = document.forms['contact-form']

form.addEventListener('submit', e => {
  e.preventDefault()
  fetch(scriptURL, { method: 'POST', body: new FormData(form)})
  .then(response => alert("Thanks for your Interest! I will reply back to you ASAP, have a great day:)" ))
  .then(() => { window.location.reload(); })
  .catch(error => console.error('Error!', error.message))
})


// ........Menu slide>>>>>>>>>

var slide= document.getElementById("sidemenu");

 function openmenu(){
    slide.style.right="0";
 }
 function closemenu(){
    slide.style.right="-200px";
 }



