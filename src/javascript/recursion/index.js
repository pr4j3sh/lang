const a = [1, 2, 3, 4, 5, 6, 7, 8, 9];

for (let i = 0; i < a.length; i++) {
  console.log(a[i]);
}

function loop(i) {
  if (i >= a.length) {
    return;
  }
  console.log(a[i]);
  loop(i + 1);
}

loop(0);
