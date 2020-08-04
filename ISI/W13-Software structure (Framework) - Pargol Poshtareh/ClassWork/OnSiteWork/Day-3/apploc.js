// let http = require("http");
// let fs = require("fs");
// let cal = require("./joeFunction");
// http
//   .createServer(function (req, res) {
//     fs.readFile("index.html", function (err, data) {
//       res.writeHead(200, { "Content-Type": "text/html" });
//       res.write(data);
//       return res.end;
//     });
//   })
//   .listen(8080);
// // console.log();
// // console.log();
var mysql = require("mysql");
var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "",
});
con.connect(function (err) {
  if (err) throw err;
  console.log("Connected");
});
