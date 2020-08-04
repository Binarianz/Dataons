// var cal = require("./calc.js");
// let result = cal.add(5, 6);
// let result2 = cal.sub(5, 6);
// console.log(`Result of addition is ${result}`);
// console.log(`Result of subtraction is ${result2}`);

let fs = require("fs");
fs.readFile("calc.js", "utf8", function (err, data) {
  console.log(data);
});
