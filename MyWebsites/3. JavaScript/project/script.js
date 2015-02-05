var colorArray = ["red","purple","green","yellow","black","blue"];
var origTopSq = document.getElementById("shape").style.marginTop;
var origLeftSq = document.getElementById("shape").style.marginLeft;
var prevTime = Date.now();
var radius="100px";

document.getElementById("shape").onclick= function() {	
	var currentTime = Date.now()-prevTime;
	var color = document.getElementById("shape").style.backgroundColor;
	document.getElementById("shape").style.backgroundColor="white";
	document.getElementById("text").innerHTML = "Reaction Time: "+currentTime+" ms";
	setTimeout(function(){ resetSquare(); },1000);
}

function resetSquare() 	{	
	document.getElementById("text").innerHTML = "";
	document.getElementById("shape").style.borderRadius = "0px";
	document.getElementById("shape").style.backgroundColor=colorArray[randChoice()];
	var posTopSq = origTopSq+Math.floor(Math.random()*700);
	var posLeftSq = origLeftSq+Math.floor(Math.random()*1600);
	document.getElementById("shape").style.marginTop=String(posTopSq)+"px";
	document.getElementById("shape").style.marginLeft=String(posLeftSq)+"px";
	if (Math.random()<Number(0.33)) {
		document.getElementById("shape").style.borderRadius = radius;
	}
	prevTime = Date.now();
}

function randChoice() {
	return Math.floor(Math.random()*6);
}





