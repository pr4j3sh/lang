
struct data {
  char *name;
  int value;
};

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3};
  double arr2[2] = {1, 2};

  struct data my_data = {"alice", 10};

  double pi = {3.14};

  // zeroing everything
  // in C23 you can skip putting zero b/w braces

  double val = {0};
  int a[10] = {0};
  struct data my_data2 = {0};

  // designated initializer
  struct data my_data3 = {.value = 30};

  return 0;
}
