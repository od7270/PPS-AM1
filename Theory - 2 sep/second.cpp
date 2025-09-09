#include <stdio.h>

int main() {
  int a;
  float b;
  double c;
  char d;
  long e;

  printf("size of integer is: %lu bytes\n", sizeof(a));
  printf("size of float is: %lu bytes\n", sizeof(b));
  printf("size of double is: %lu bytes\n", sizeof(c));
  printf("size of character is: %lu bytes\n", sizeof(d));
  printf("size of long is: %lu bytes\n", sizeof(e));
}