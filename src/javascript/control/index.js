class Loop {
  constructor(a) {
    this.a = a;
  }

  disp() {
    console.log(this.a);
  }

  spread(a) {
    this.a = [...this.a, ...a];
  }

  forOf() {
    for (let i of this.a) {
      console.log(i);
    }
  }
  forOfKeys() {
    for (let i of this.a.keys()) {
      console.log(i);
    }
  }
  forOfValues() {
    for (let i of this.a.values()) {
      console.log(i);
    }
  }
  forOfEntries() {
    for (let [i, val] of this.a.entries()) {
      console.log({ i, val });
    }
  }
}

const a = new Loop([1, 2, 3, 4, 5]);
a.disp();
a.spread([6, 7, 8, 9, 10]);
a.disp();

const str = new Loop("what is this");
str.disp();
str.spread("");
str.disp();

a.forOf();
a.forOfKeys();
a.forOfValues();
a.forOfEntries();
