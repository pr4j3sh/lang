struct data {
  char *name;
  int age;
};

typedef struct new_data {
  char *name;
  int age;
} d;

int main(int argc, char *argv[]) {
  struct data my_data = {};
  d my_data2 = {};
  return 0;
}
