const fs = require('fs');

let n = fs.readFileSync(0).toString();
n = Number(n);

console.log((n+1.5).toFixed(2));