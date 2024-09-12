#include <stdio.h>

#define MAX 1000

int getstring(char line[], int lim);
void copy(char longest[], char line[]);

int main() {
  int c, len;
  char line[MAX], longest[MAX];

  while ((len = getstring(line, MAX)) > 0) {
    if (len == 1 && line[0] == '\n') {
      continue;
    } else {
      copy(longest, line);
      printf("%s\n", longest);
    }
  }

  return 0;
}

int getstring(char line[], int lim) {
  int i, c;
  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) {
    if (c == ' ' || c == '\t') {
      continue;
    } else {
      line[i] = c;
    }
  }
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char longest[], char line[]) {
  char c;
  int i = 0;
  while ((longest[i] = line[i]) != '\0') {
    i++;
  }
}
