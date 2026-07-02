
class Toi {
  constructor(arr) {
    this.src = arr
    this.aux = []
    this.dst = []
  }

  _check(name, arr) {
    for (let i = 0; i <= arr.length; i++) {
      if (arr[i] > arr[i + 1]) {
        console.log({ name, arr })
        throw new Error("Wrong move")
      }
    }
  }

  check() {
    if (this.src.length) {
      this._check("src", this.src)
    }

    if (this.aux.length) {
      this._check("aux", this.aux)
    }
    if (this.dst.length) {
      this._check("dst", this.dst)
    }
  }

}

const t = new Toi([1, 2, 3, 4, 5])
t.check()

for (let i = 0; i <= t.src.length; i++) {

}

