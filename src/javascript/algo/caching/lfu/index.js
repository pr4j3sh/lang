// lfu - least frequently used cache, uses min heap + hash map
// structure - capacity = 2
// frequency map
// {
//    freq1: {key1, key3},
//    freq2: {key2}
// }
//
// map
// {
//    key1: {value1, freq1},
//    key2: {value2, freq2}
// }

class Cache {
  constructor(cap) {
    this.cap = cap;
    this.map = new Map();
    this.freqMap = new Map();
    this.minFreq = 0;
  }

  _updateFreq(key) {
    let { val, freq } = this.map.get(key);
    this.map.set(key, { val, freq: freq + 1 });

    this.freqMap.get(freq).delete(key);
    if (!this.freqMap.get(freq).size) {
      this.freqMap.delete(freq);
      if (this.minFreq === freq) this.minFreq++;
    }

    if (!this.freqMap.has(freq + 1)) this.freqMap.set(freq + 1, new Set());
    this.freqMap.get(freq + 1).add(key);
  }

  get(key) {
    if (!this.map.has(key)) return -1;
    this._updateFreq(key);
    return this.map.get(key).val;
  }

  put(key, val) {
    if (this.cap === 0) return;

    if (this.map.has(key)) {
      this.map.set(key, { val, freq: this.map.get(key).freq });
      this._updateFreq(key);
      return;
    }

    if (this.map.size >= this.cap) {
      let minFreqKeys = this.freqMap.get(this.minFreq);
      let oldestKey = minFreqKeys.values().next().value;
      minFreqKeys.delete(oldestKey);
      if (!minFreqKeys.size) this.freqMap.delete(this.minFreq);
      this.map.delete(oldestKey);
    }

    this.map.set(key, { val, freq: 1 });
    this.minFreq = 1;
    if (!this.freqMap.has(1)) this.freqMap.set(1, new Set());
    this.freqMap.get(1).add(key);
  }
}

const lfu = new Cache(3);
lfu.put(1, "A");
lfu.put(2, "B");
lfu.put(3, "C");
console.log(lfu.get(1)); // Increases freq of 1
lfu.put(4, "D"); // Removes least frequently used (2 or 3)
console.log(lfu.get(2)); // -1 (removed)
