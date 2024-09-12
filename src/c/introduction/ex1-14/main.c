#include <stdio.h>

int main() {
  int arr[128] = {0}, c;
  while ((c = getchar()) != EOF) {
    arr[c]++;
  }

  for (int i = 0; i < 128; i++) {
    if (arr[i] != 0) {
      printf("%c -> ", i);
      for (int j = 0; j < arr[i]; j++) {
        printf("* ");
      }
      printf("\n");
    }
  }
  return 0;
}
