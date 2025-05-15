#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  int a = stoi(argv[1]), b = stoi(argv[2]), c = stoi(argv[3]);
  if (a == b && b == c)
    cout << "equal" << endl;
  else
    cout << "not equal" << endl;
  return 0;
}
