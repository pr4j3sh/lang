function greet(name) {
  return `Hey ${name}`;
}

const res = greet("Harman");

console.log(res);

var fns = {
  see() {
    console.log("i see");
  },

  hear() {
    console.log("i hear");
  },
  speak() {
    console.log("i speak");
  },
};

fns.hear();
