#include <iostream>
#include <ostream>
#include <stack>
using namespace std;

void insert(stack<int> &s, int v) {
  if (s.empty() || v > s.top()) {
    s.push(v);
    return;
  }

  int temp = s.top();
  s.pop();
  insert(s, v);

  s.push(temp);
}

void sort(stack<int> &s) {

  if (!s.empty()) {
    int temp = s.top();
    s.pop();

    sort(s);

    insert(s, temp);
  }
}

int main(int argc, char *argv[]) {

  stack<int> s;
  s.push(4);
  s.push(9);
  s.push(3);
  s.push(6);
  s.push(1);

  sort(s);

  if (s.empty()) {
    cout << "\nstack is empty" << endl;
  }

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}
