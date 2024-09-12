#include <stdio.h>

#define MAX 1000

int getLine(char line[], int lim);
void reverse(char line[], char rev[], int len);

int main() {
  char line[MAX], rev[MAX];
  int len;
  while ((len = getLine(line, MAX)) > 0) {
    reverse(line, rev, len);
    printf("%s\n", rev);
  }
  return 0;
}

int getLine(char line[], int lim) {
  int i, c;
  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';
  return i;
}

void reverse(char line[], char rev[], int len) {
  int i;
  for (i = 0; line[i] != '\0'; i++) {
    rev[i] = line[len - i - 1];
  }
  rev[i] = '\0';
}
