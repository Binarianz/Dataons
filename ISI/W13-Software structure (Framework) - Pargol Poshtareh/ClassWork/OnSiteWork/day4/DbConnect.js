let mysql = require("mysql");
let con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "",
  database: "w13Db",
});
con.connect(function (err) {
  if (err) throw err;
  var sql =
    "SELECT customers.name AS user, phone.number AS phoneNUmber FROM customers JOIN phone";
  con.query(sql, function (err, result) {
    if (err) throw err;
    console.log(result);
  });
});
