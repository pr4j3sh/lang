// large numbers
var lnum = 1_000_000_000;
var lnum1 = 1e9;
console.log(lnum === lnum1);

// small nums
var snum = 0.000001;
var snum1 = 1e-6;
console.log(snum === snum1);

// toString(base)
// base -> 2 - 36 | 10 (default)
let num = 10;
console.log(typeof num.toString());
console.log(num.toString(2));
console.log(num.toString(8));
console.log(num.toString(10));
console.log(num.toString(16));

// rounding

console.log(Math.ceil(11.1)); // 12
console.log(Math.floor(11.1)); // 11
console.log(Math.round(11.1)); // 11
console.log(Math.round(11.5)); // 12
console.log(Math.round(11.9)); // 12
console.log(Math.trunc(11.9)); // 11

// limt decimal places
// problem - endless binary

console.log((0.1 + 0.3).toString(2));

num = 11.11111111;
console.log(num.toFixed(1));

console.log(9999999999999999); // 10000000000000000

console.log(0 === -0);

console.log(isNaN(NaN));
console.log(isFinite(Infinity));

console.log(parseInt("123f"));

console.log(Math.ceil(Math.random() * 100));

console.log(Math.max(1, 2));
console.log(Math.min(1, 2));

console.log(Math.pow(2, 2));
