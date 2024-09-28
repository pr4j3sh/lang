#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]) {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  cout << q.empty() << endl;
  cout << q.front() << endl;
  cout << q.back() << endl;
  while (q.size() > 1) {
    cout << q.front() << endl;
    q.pop();
  }
  cout << q.front() << endl;
  cout << q.back() << endl;
  return 0;
}
