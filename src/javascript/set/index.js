class Set {
  constructor() {
    this.set = [];
    this.length = 0;
  }

  _find(value) {
    return this.set.find((e) => e === value);
  }

  insert(value) {
    if (!this._find(value)) {
      this.set.push(value);
      this.length++;
    }
  }

  print() {
    this.set.map((e) => console.log(e));
  }
}

const s = new Set();
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(3);
s.insert(3);
s.insert(3);
s.insert(3);
s.insert(4);
s.insert(4);
s.insert(5);
s.insert(0);
s.print();
console.log(s.length);
