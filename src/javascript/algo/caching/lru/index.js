// structure of lru cache doubly linked list + hashmap
// head <-> {key1: value1} <-> {key2: value2} <-> tail
// { key1: {key1: value1},
//   key2: {key2: value2} }

class Node {
  constructor(key, val) {
    this.key = key;
    this.val = val;
    this.prev = null;
    this.next = null;
  }
}

class Cache {
  constructor(cap) {
    this.cap = cap;
    this.map = new Map();
    this.head = new Node(null, null);
    this.tail = new Node(null, null);
    this.head.next = this.tail;
    this.tail.prev = this.head;
  }

  _addToHead(node) {
    node.next = this.head.next;
    node.prev = this.head;
    this.head.next.prev = node;
    this.head.next = node;
  }

  _remove(node) {
    node.prev.next = node.next;
    node.next.prev = node.prev;
  }

  _moveToHead(node) {
    this._remove(node);
    this._addToHead(node);
  }

  get(key) {
    if (!this.map.has(key)) return -1;
    const node = this.map.get(key);
    this._moveToHead(node);
    return node.val;
  }

  put(key, val) {
    if (this.map.has(key)) {
      const node = this.map.get(key);
      node.val = val;
      this._moveToHead(node);
    } else {
      const node = new Node(key, val);
      this.map.set(key, node);
      this._addToHead(node);

      if (this.map.size > this.cap) {
        const tail = this.tail.prev;
        this._remove(tail);
        this.map.delete(tail.key);
      }
    }
  }
}

const lru = new Cache(3);
lru.put(1, "a");
lru.put(2, "b");
lru.put(3, "c");

// 3 <-> 2 <-> 1

console.log(lru.get(1));

// 1 <-> 3 <-> 2

lru.put(4, "d");

// 4 <-> 1 <-> 3

console.log(lru.get(2));
