#include <stdio.h>

int main() {

  // i)
  int num = 15, n = 3, result;
  result = (num >> n) & 1; // num is greater than n therefore it is true and 1 & 1 is also true, so 1.
  /*
  LOGIC:
  15 - 00001111
  3  - 00000011
  num >> n is true therefore - 1
  and 1 & 1 is 1
  therefore, 00000001 and hence prints - 1
  */
  printf("%d", result); // prints 1 - binary - 00000001

  // ii)
  int a = 2, b = 3, c = 4, d;
  d = a & b | c ^ a;
  /*
  LOGIC:
  a - 00000010
  b - 00000011
  c - 00000100
  a & b - 00000010
  c ^ a - 00000110
  (a & b) | (c ^ a) - 00000110
  therefore, 00000110 prints 6.
  */
  printf("%d", d); // prints 6 - binary - 00000110

  // iii)
  int x = 12, y;
  y = x << 4 & 5;
  /*
  LOGIC:
  12 - 00001100
  4  - 00000100
  5  - 00000101
  x << 4 is false therefore - 0
  and 0 & 1 is 0
  therefore, 00000000 and hence prints - 0
  */
  printf("%d", y); // prints 0 - binary - 00000000

  return 0;
}