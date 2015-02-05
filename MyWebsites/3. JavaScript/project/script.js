var colorArray = ["red","purple","green","yellow","black","blue"];
var origTopSq = document.getElementById("square").style.marginTop;
var origLeftSq = document.getElementById("square").style.marginLeft;
var origTopTx = document.getElementById("text").style.marginTop;
var origLeftTx = document.getElementById("text").style.marginLeft;

document.getElementById("square").onclick= function() {	
	var color = document.getElementById("square").style.backgroundColor;
	document.getElementById("square").style.backgroundColor="white";
	setTimeout(resetSquare(),3000);
}

function resetSquare() 	{
	document.getElementById("square").style.backgroundColor=colorArray[randChoice()];
	var posTopSq = origTopSq+Math.floor(Math.random()*800);
	var posLeftSq = origLeftSq+Math.floor(Math.random()*1600);
	var posTopTx = origTopSq+Math.floor(Math.random()*800);
	var posLeftTx = origLeftSq+Math.floor(Math.random()*1600);
	document.getElementById("square").style.marginTop=String(posTopSq)+"px";
	document.getElementById("square").style.marginLeft=String(posLeftSq)+"px";
	document.getElementById("text").style.marginTop=String(posTopTx)+"px";
	document.getElementById("text").style.marginLeft=String(posLeftTx)+"px";
}

function randChoice() {
	return Math.floor(Math.random()*6);
}





