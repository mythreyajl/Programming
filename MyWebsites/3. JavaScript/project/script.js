var colorArray = ["red","purple","green","yellow","black","blue"];
var origTopSq = document.getElementById("square").style.marginTop;
var origLeftSq = document.getElementById("square").style.marginLeft;
var prevTime = Date.now();

document.getElementById("square").onclick= function() {	
	var currentTime = Date.now()-prevTime;
	var color = document.getElementById("square").style.backgroundColor;
	document.getElementById("square").style.backgroundColor="white";
	document.getElementById("text").innerHTML = "Reaction Time: "+currentTime+" ms";
	setTimeout(function(){ resetSquare(); },1000);
}

function resetSquare() 	{
	document.getElementById("square").style.backgroundColor=colorArray[randChoice()];
	var posTopSq = origTopSq+Math.floor(Math.random()*700);
	var posLeftSq = origLeftSq+Math.floor(Math.random()*1600);
	document.getElementById("square").style.marginTop=String(posTopSq)+"px";
	document.getElementById("square").style.marginLeft=String(posLeftSq)+"px";
	document.getElementById("text").style.marginLeft=String(posLeftSq)+"px";
	prevTime = Date.now();
}

function randChoice() {
	return Math.floor(Math.random()*6);
}





