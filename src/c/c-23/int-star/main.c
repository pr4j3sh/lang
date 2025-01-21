#include <stddef.h>
int main(int argc, char *argv[]) {
  size_t sz = 10;
  int(*pk)[sz][sz] = malloc(sizeof(*pk));
  return 0;
}
