#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  priority_queue<int, vector<int>, greater<int>> minh;
  minh.push(5);
  minh.push(4);
  minh.push(3);
  minh.push(2);
  minh.push(1);

  while (!minh.empty()) {
    cout << minh.top() << endl;
    minh.pop();
  }
  return 0;
}
