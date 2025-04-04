#include <iostream>
#include <vector>
using namespace std;

// TC - O(n)
// SC - O(n) + O(n)

int fib(int n, vector<int> &dp) {
  if (n <= 1)
    return n;
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main(int argc, char *argv[]) {
  int n = 10;
  vector<int> dp(n + 1, -1);
  cout << fib(n, dp) << endl;
  return 0;
}
