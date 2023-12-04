var randomVAlue1= Math.floor((Math.random()*6)+1);

var randomDiceImage1 = "images/" + "dice" + randomVAlue1 + ".png";

//document.querySelectorAll("img")[0].setAttribute("src",randomDiceImage);
document.getElementById("img1").src = randomDiceImage1;

var randomVAlue2= Math.floor((Math.random()*6)+1);

var randomDiceImage2 = "images/" + "dice" + randomVAlue2 + ".png";

//document.querySelectorAll("img")[0].setAttribute("src",randomDiceImage);
document.querySelectorAll("img")[1].src = randomDiceImage2;

if (randomVAlue1 > randomVAlue2) {
document.getElementById("kjj").innerHTML = "✔ P1 wins" ; }
else if (randomVAlue1 === randomVAlue2)
{
  document.getElementById("kjj").innerHTML = " 💥draw 💥";
}
else
{
  document.getElementById("kjj").innerHTML = " P2 wins ✅";

}
