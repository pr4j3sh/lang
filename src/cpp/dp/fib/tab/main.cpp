#include <iostream>
#include <vector>
using namespace std;

// TC - O(n)
// SC - O(n)

int main(int argc, char *argv[]) {
  int n = 10;
  vector<int> dp(n + 1, -1);
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << endl;
  return 0;
}
