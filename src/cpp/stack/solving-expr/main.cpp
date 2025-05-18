#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
  string expr = "(((2+3)/2)*2)";
  int n = expr.size();
  stack<int> ops;
  stack<int> nums;

  for (auto i : expr) {
    if (i == '(') {
      ;
    } else if (i == '+' || i == '-' || i == '*' || i == '/') {
      ops.push(i);
    } else if (i == ')') {
      int b = nums.top();
      nums.pop();
      int a = nums.top();
      nums.pop();
      char op = ops.top();
      ops.pop();
      if (op == '+') {
        nums.push(a + b);
      } else if (op == '-') {
        nums.push(a - b);
      } else if (op == '*') {
        nums.push(a * b);
      } else if (op == '/') {
        nums.push(a / b);
      }
    } else {
      nums.push(int(i - '0'));
    }
  }

  cout << nums.top() << endl;
  return 0;
}
