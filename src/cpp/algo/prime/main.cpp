#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_prime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int calc_primes(int n) {
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (is_prime(i)) {
      ans = i;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  int n = stoi(argv[1]);
  cout << calc_primes(n) << endl;

  return 0;
}
