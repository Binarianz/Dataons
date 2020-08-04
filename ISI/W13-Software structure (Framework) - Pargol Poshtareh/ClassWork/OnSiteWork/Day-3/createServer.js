let http = require("http");
http
  .createServer((req, res) => {
    // res.write("My first server is created");
    // res.end();
    console.log("object");
  })
  .listen(8080, () => {
    console.log("I am listening hey yo");
  });
