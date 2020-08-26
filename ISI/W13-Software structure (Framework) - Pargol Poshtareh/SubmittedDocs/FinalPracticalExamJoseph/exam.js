var size = prompt("Enter the size of the array");
var inputArray = [];
for (var i = 0; i < size; i++) {
  inputArray[i] = prompt("Enter Element " + (i + 1));
}
document.getElementById("output").innerHTML =
  "The orginal array is : " + inputArray;

function firstWay() {
  let x = [];
  inputArray = x;
  document.getElementById("output").innerHTML =
    "outpt Got by method 1 array size is : " + inputArray.length;
}
function secondWay() {
  inputArray.length = 0;
  document.getElementById("output").innerHTML =
    "outpt Got by method 2 array size is : " + inputArray.length;
}
function thirdWay() {
  inputArray.splice(0, inputArray.length);
  document.getElementById("output").innerHTML =
    "outpt Got by method 3 array size is : " + inputArray.length;
}
function FourthWay() {
  for (let i = 0; i < inputArray.length; i++) {
    inputArray.pop();
  }
  document.getElementById("output").innerHTML =
    "outpt Got by method 4 array size is : " + inputArray.length;
}
