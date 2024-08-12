// print hello world

// console.log("hello world");

// objects
// const obj = {
//   body: {
//     div: {
//       article,
//     },
//   },
// };

const users = {
  one: {
    name: "tom",
    age: 31,
  },
  two: {
    name: "abby",
    age: 27,
    gender: "female",
  },
};

const randomName = users.one.name;

// console.log(randomName);

// variables

var num;

// console.log(num);

num = 4;

// console.log(num);

num = 8;

// console.log(num);

{
  var a = 1;
  let b = 2;
  const c = 3;
}

{
  // console.log(a);
  // // console.log(b);
  // console.log(c);
}

// console.log(a);
// console.log(b);
// console.log(c);

// data types

// - string
// - numbers
// - boolean

let str = 'jane doe "female" '; // anaya sutar "beautiful"
let num1 = 28; // -2^53 to +2^53
let val = true; // true or false
let dec = 11.11;

let sumVar = null;
let sumVar2;

// console.log(typeof str);
// console.log(typeof num1);
// console.log(typeof val);
// console.log(typeof dec);
// console.log(typeof sumVar);
// console.log(typeof sumVar2);
// console.log(typeof users);

let var1 = "1";
// console.log(typeof var1);

// type casting

// datatypeToConvertIn(originalDataType)
// console.log(Number(false));

// concatenate
// console.log(2 + 1); // 3
// console.log("2" + "1"); // 21
// console.log("2" + 1); // 21
// console.log(2 + "1"); // 21
// console.log("2" + 1 + 1); // 211
// console.log(1 + 1 + "2"); // 22
// console.log(2 + "2"); // 22
// console.log(11.11 + 11 + "1"); // 22.111

// equality
// ==
// ===

// console.log(123 == 123); // true
// console.log("123" == "123"); // true
// console.log("123" == 123); // true
// console.log(123 === 123); // true
// console.log("123" === "123"); // true
// console.log("123" === 123); // false

// loops

// while

// let i = 0;
// while (i < 10) {
//   // statements
//   console.log("vowels " + i);
//   i = i + 1;
// }

// const vowels = ["a", "e", "i", "o", "u"];
// let j = 0;
//
// while (j < 5) {
//   console.log(vowels[j]);
//   j++;
// }

// for (let i = 0; i < 5; i++) {
//   console.log(vowels[i]);
// }

// do {
//   console.log("hello");
// } while (false);

// break

// for (let i = 0; i < 10; i++) {
//   if (i === 5) {
//     break;
//   }
//   console.log(i);
// }

// continue

// for (let i = 0; i < 10; i++) {
//   if (i === 5) {
//     continue;
//   }
//   console.log(i);
// }

// print sum of n numbers

// let n = 10;
// let sum = 0;
//
// for (let i = 1; i <= n; i++) {
//   sum = sum + i;
//   console.log(sum);
// }
//
// console.log("final: " + sum);

// let n = 10;
// let pro = 1;
//
// for (let i = 1; i <= n; i++) {
//   pro = 2 * i;
//   console.log("2" + " * " + i + " = " + pro);
// }

// const vowels = ["a", "e", "i", "o", "u"];
//
// vowels.forEach((e) => {
//   console.log(e);
// });

let age = 10;

// if (age < 18) {
//   console.log("you're not an adult");
// } else {
//   console.log("you're an adult");
// }

// else if

// if (age < 13) {
//   console.log("you're a child");
// } else if (age >= 13 && age < 18) {
//   console.log("you're a teenager");
// } else {
//   console.log("you're an adult");
// }

// ternary operator

const ans = age < 18 ? "not adult" : "adult";

// console.log(ans);

let n = 3;

for (let i = 0; i < n; i++) {
  for (let j = n; j > 0; j--) {
    for (let k = i; k < n; k++) {
      process.stdout.write(`${j} `);
    }
  }
  process.stdout.write("$");
}
