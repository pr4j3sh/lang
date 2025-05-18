class Dyna {
  int *a;
  int size;
  int capacity;

  Dyna() {
    a = new int[1];
    size = 0;
    capacity = 1;
  }

  void resize(int cap) {
    int *b = new int[cap];
    for (int i = 0; i < size; i++) {
      b[i] = a[i];
    }
    delete[] a;
    a = b;
    capacity = cap;
  }

  void push(int num) {
    if (size >= capacity) {
      resize(2 * capacity);
    }
    a[size++] = num;
  }

  ~Dyna() { delete[] a; }
};
