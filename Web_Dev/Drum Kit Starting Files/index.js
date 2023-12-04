/*  functio to plqy same music fo all buttons
var numofdrums= document.querySelectorAll(".drum").length;
for(var i=0;i<numofdrums;i++)
{
  document.querySelectorAll(".drum")[i].addEventListener("click", function()
  {   var audio = new Audio("sounds/tom-1.mp3");
       audio.play();

});

}
*/
 // -------------------------------------------------------------------------------------------------------------------

//document.querySelector("button").addEventListener("click", function() {alert("clicked!");});

//document.querySelector("button").addEventListener("click",myfun(){alert("button clicked!");});
// do not use () in addEventListener(click myfun())- >it will directly call the fn which is not intended


// use queryselectorall[index] to choose which button you want to clic
// use queryselector , by default first occurence will be choosen

/* to know which button got clicked
var numofdrums= document.querySelectorAll(".drum").length;
for(var i=0;i<numofdrums;i++)
{
  document.querySelectorAll(".drum")[i].addEventListener("click", function()
  {
    this.style.color = "blue";
  });

}
*/
// ---------------------------------------------------------------------------------------------------------------------
 // using switch case to get the desired button output
 var numofdrums= document.querySelectorAll(".drum").length;
 for(var i=0;i<numofdrums;i++)
 {
   document.querySelectorAll(".drum")[i].addEventListener("click", function()
   {
     var buttonInnerHTMl=this.innerHTML;
    makesound(buttonInnerHTMl);
    buttonAnimation(buttonInnerHTMl);

});
}

//function to check which button from keyboard has been pressed
document.addEventListener("keypress", function(event) {
  makesound(event.key);
  buttonAnimation(event.key);
});

//-------------------------------------------------------------------------------------------------------------------

function makesound(key){
  switch(key){

    case "w":
                  var tom1 = new Audio("sounds/tom-1.mp3");
                  tom1.play();
                  break;

    case "a":
                   var tom2 = new Audio("sounds/tom-2.mp3");
                   tom2.play();
                   break;

     case "s":
                   var tom2 = new Audio("sounds/tom-3.mp3");
                   tom2.play();
                   break;
      case "d":
                  var tom2 = new Audio("sounds/tom-3.mp3");
                  tom2.play();
                   break;
      case "j":
                   var tom2 = new Audio("sounds/snare.mp3");
                   tom2.play();
                   break;
      case "k":
                   var tom2 = new Audio("sounds/kick-bass.mp3");
                   tom2.play();
                   break;

       case "l":
                   var tom2 = new Audio("sounds/crash.mp3");
                   tom2.play();
                   break;


       default :console.log("buttonInnerHTMl");
  }

}


// to add animation to the key pressed

function buttonAnimation(currentkey)
{
   var activebutton = document.querySelector("."+currentkey); // to get the pressed current button
   activebutton.classList.add("pressed");

   setTimeout(function () {
     activebutton.classList.remove("pressed")
   }, 100);
}
