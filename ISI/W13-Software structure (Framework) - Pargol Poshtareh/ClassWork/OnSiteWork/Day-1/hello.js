// // document.getElementById("hello").addEventListener("load", myFunction);
// // function myFunction() {}
// console.log(10 + 40 - 8 / 1);

// let celsius = 12;
// let farenheit = celsius * 1.8 + 32;
// console.log(farenheit);
// console.log(object);

// console.log(
//   'Why couldn\'t the shoes go out and play?\nThey were all "tied" up!'
// );

// let bill = 10.25 + 3.99 + 7.15;
// let tip = bill * 0.15;
// let total = bill + tip;
// console.log("Total: " + total);

// let mucisions = 3;

// if (mucisions === 0) {
//   console.log('"not a group');
// } else if (mucisions === 1) {
//   console.log("solo");
// } else if (mucisions === 2) {
//   console.log("duet");
// } else if (mucisions === 3) {
//   console.log("trio");
// } else if (mucisions === 4) {
//   console.log("qurtet");
// } else if (mucisions > 4) {
//   console.log('"this is a large');
// }
// let firstName = "Joseph";
// let lastName = "Emmanuel";
// let fullName = `${firstName} x ${lastName}`;
// console.log(fullName);

// let balance;
// let account;
// if(balance>0&&account=true){
//   console.log('your balance is $'+balance+' balance .';
// }
// if(balance>0||account=true){
//  if(balance<0){
//    console.log('Thank you have nice day');
// else{
//   if(balance==0)
//   console.log('your account has zero balance');
// }
//  }
// }
// let x = 9;
// for (let index = x; index >= 1; index--) {
//   console.log("hello " + index);
// }
// console.log(`string text line 1 and i want to check's
// string text line 2`);

// let a = 5;
// let b = 10;
// console.log(`Fifteen is ${a + b} and
// not ${2 * a + b}.`);
// console.log(laugh(3));

// function laugh(value) {
//   let answer = "";
//   for (let index = 0; index < value; index++) {
//     answer += "ha";
//   }
//   return answer + "!";
// }

// printStart(9);

// function printStart(size) {
//   let answer = "";
//   for (let index = 1; index <= size; index++) {
//     for (let j = 0; j < index; j++) {
//       answer += "*";
//     }
//     answer += "\n";
//   }
//   console.log(answer);
// }

// let laugh1 = function (value) {
//   let answer = "";
//   for (let index = 0; index < value; index++) {
//     answer += "ha";
//   }
//   return answer + "!";
// };
// let prices = [1.23, 48.11, 90.11, 8.5, 9.99, 1.0, 1.1, 67.0];
// prices[0] = 100;
// prices[2] = 200;
// prices[6] = 600;

// for (let index = 0; index < prices.length; index++) {
//   console.log(prices[index]);
// }

let rainbow = ["Red", "Orange", "Blackberry", "blue"];
rainbow.splice(2, 1, "yellow", "green");
rainbow.splice(5, 0, "purple");
console.log(rainbow);
