#include <stdio.h>

int main() {

  // i)
  float d = 1.5, D = 2.5; // d is a variable anf D is a variable.
  printf("%d%d", d++ + ++D); // d = 1.5 & D = 3.5 (in this line)

  // ii)
  char c = 'A', C = 'a'; // idk
  printf(c++ * ++C); // idk

  // iii)
  char ch = '0'; // idk
  rintf(ch-- + --ch); // idk

  // iv)
  char ch = '1'++; // idk
  printf(ch); // idk

  // v)
  int a = 11++; // idk
  printf(a); // idk

  // vi)
  int i=19, j=29, k; // i = 19, j = 29, k.
  k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
  /*
    i-- 19 --> 18
    i++ 18 --> 19
    --j 28 --> 28
    ++j 29 --> 29
    --i 18 --> 18
    j-- 29 --> 28
    ++i 19 --> 19
    j++ 28 --> 29
    Therefore, i = 19, j = 29, k = -20.
  */
  printf(i); // i = 19
  printf(j); // j = 29
  printf(k); // k = -20

  return 0;
}