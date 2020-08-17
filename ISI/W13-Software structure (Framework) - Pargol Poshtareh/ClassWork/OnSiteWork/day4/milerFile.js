var nodemailer = require("nodemailer");

var transporter = nodemailer.createTransport({
  host: "smtp.mail.com",
  port: 465,
  secure: true,
  service: "mail",
  auth: {
    user: "joseph.emmanuel@myself.com",
    pass: "co4vinus",
  },
});

var mailOptions = {
  from: "joseph.emmanuel@myself.com",
  to: "joseph.emmanuel@outlook.com",
  subject: "Sending Email using Node.js",
  text: "That was easy!",
};

transporter.sendMail(mailOptions, function (error, info) {
  if (error) {
    console.log(error);
  } else {
    console.log("Email sent: " + info.response);
  }
});
