#include <stdio.h>
int strlength(char *s) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}
int main(int argc, char *argv[]) {
  char *s = "hello world";
  int size = strlength(s);
  printf("%d", size);
  return 0;
}
