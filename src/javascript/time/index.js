let time;

time = new Date();
console.log(time); // now

time = new Date(0); // 1970-01-01
console.log(time);

time = new Date(24 * 60 * 60 * 1000); // 1970-01-02
console.log(time);

time = new Date(-24 * 60 * 60 * 1000); // 1969-12-31
console.log(time);

time = new Date("2002-02-17"); // 2002-02-17
console.log(time);

// new Date(year, month, date, hours, minutes, seconds, ms)
time = new Date(2002, 1, 17, 9, 15, 10, 413);
console.log(time);

time = new Date();
console.log(time);
console.log({
  year: time.getFullYear(),
  month: time.getMonth(),
  date: time.getDate(),
  hours: time.getHours(),
  min: time.getMinutes(),
  sec: time.getSeconds(),
  ms: time.getMilliseconds(),
  day: time.getDay(),
});
console.log({
  year: time.getUTCFullYear(),
  month: time.getUTCMonth(),
  date: time.getUTCDate(),
  hours: time.getUTCHours(),
  min: time.getUTCMinutes(),
  sec: time.getUTCSeconds(),
  ms: time.getUTCMilliseconds(),
  day: time.getUTCDay(),
});

console.log(time.getTime());
console.log(time.getTimezoneOffset());
