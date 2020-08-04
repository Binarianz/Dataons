const http = require("http");
let server = http
  .createServer((req, res) => {
    console.log("Thanks for the request");
  })
  .listen(1234, () => {
    console.log("I'm listening. yo u betcha. yo hoh oho");
  });
