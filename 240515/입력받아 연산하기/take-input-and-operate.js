const fs = require('fs');

let input = fs.readFileSync(0).toString().split("\n");
let a = Number(input[0]);
let b = Number(input[1]);

console.log("%d\n%d", a+87, b%10);