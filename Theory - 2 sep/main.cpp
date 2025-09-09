#include <stdio.h>

int main()
{
  int a = 9;
  int b = 12;
  char city[10] = "London";

  printf("size of c = %zu\n", sizeof(city));

  printf("a & b = %d\n", a & b);
  printf("a | b = %d\n", a | b);
  printf("a ^ b = %d\n", a ^ b);
  printf("~a = %d\n", ~a);
  printf("a << 2 = %d\n", a << 2);
  printf("b >> 2 = %d\n", b >> 2);
  printf("size of a = %zu\n", sizeof(a));
  return 0;
}