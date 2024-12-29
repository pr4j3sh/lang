function merge(a, l, m, r) {
  let n1 = m - l + 1,
    n2 = r - m;
  let left = [],
    right = [];

  for (let i = 0; i < n1; i++) {
    left[i] = a[l + i];
  }
  for (let i = 0; i < n2; i++) {
    right[i] = a[m + 1 + i];
  }

  let i = 0,
    j = 0,
    k = l;

  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      a[k] = left[i];
      k++;
      i++;
    } else {
      a[k] = right[j];
      k++;
      j++;
    }
  }
  while (i < n1) {
    a[k] = left[i];
    k++;
    i++;
  }
  while (j < n2) {
    a[k] = right[j];
    k++;
    j++;
  }
}

function mergeSort(a, l, r) {
  if (l < r) {
    let m = Math.floor(l + (r - l) / 2);
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
  }
}

let a = [4, 2, 7, 9, 3, 1, 6, 4];
mergeSort(a, 0, a.length - 1);
console.log(a);
