#include <stdio.h>

// constant expr
#define NUM 11
#define NAME                                                                   \
  "john"                                                                       \
  " "                                                                          \
  "doe"

enum boolean { NO, YES };

int main(int argc, char *argv[]) {
  // constants
  const int i = 1234;
  const long int li = 123456789L;
  const unsigned int ui = 1234U;
  const unsigned long int uli = 123456789UL;
  const double d = 1234.56F;
  const long double ld = 1234.56L;
  const int o = 012;
  const unsigned int uo = 012U;
  const long int lo = 012L;
  const unsigned long int luo = 012UL;
  const int h = 0xA;
  const unsigned int uh = 0xAU;
  const long int lh = 0xAL;
  const unsigned long int luh = 012UL;

  printf("oct -> %d\n", o);
  printf("hex -> %d\n", h);

  printf("%s\n", NAME);

  return 0;
}
