// one method to add css style in JS using Jquery
//$("h1").css("color", "green");

// 2nd method is to define a class in css file and add in JQUERY
//$("h1").addClass("big-text");

// to add two classes use then below method
//$("h1").addClass("big-text margin-big");

// $("h1").hasClass("margin-50"); gives true if margin is 50px else false

// to modify the given text
//$("h1").text("bye");

// $ selects all or single
//$("button").text("dont click"); (also can use .html instead of text)

//to change the attribute of an image
//$("a").attr("href", "https://www.youtube.com");

/* to add event listener
$("h1").click(function(){
  $("h1").css("color" , "purple");
}); */

/* normal function to go through all buttons
for( var i=0; i<5;i++){
  document.querySelectorAll("button")[i].addEventListener("click" ,function()
{
  document.querySelector("h1").style.color = "purple";
})
}; */

/* shortcut using jquery to reduce the code length
$("button").click(function(){
  $("h1").css("color", "pink");
});  */

/* to detect the keypress
$("input").keypress(function(event){
  console.log(event.key);
});   */

/* to press any button on keyboard an disaplay it
$(document).keypress(function(event){
  $("h1").text(event.key);
});  */

/* simple method to modify the property using on
$("h1").on("click", function(){       u can use any event like press , mouseover etc,,
  $("h1").text("sdf");
});   */

// to make button appera and disapper ot toggle
$("button").on("click", function(){
  //$("h1").hide();
  //$("h1").show();
  //$("h1").toggle();
  //$("h1").fadeToggle();
  //$("h1").slideUp();
  //$("h1").slideDown();
  //$("h1").slideToggle();    // this coiuld be used for deropdown menu


  // also userdefined custom animations can aslos be added using
  //$("h1").animate({opacity : 0.5} ); // using animate only numeric things can be manipualted not other
  //$("h1").animate({color:red}); // this wont work
  //$("h1").animate({margin : 10});

  // if we want multiple events to occur them chaining is necessary
  $("h1").slideUp().slideDown().animate({opactiy: 0.5});

})
