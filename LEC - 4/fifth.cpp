#include <stdio.h>

int main() {

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num & 1) {
      printf("%d is odd.\n", num);
  } else {
      printf("%d is even.\n", num);
  }

  /*
    LOGIC:
    1. bitwise operators work entirely on binary so, the num we accept is converted into a binary number. So, we'll take 2 use cases:
      a. num = 2/4/6/8/... (an even number)
        the binaries are:
        - 2 = 0010
        - 4 = 0100
        - 6 = 0110
        - 8 = 1000
        etc.
        notice how there's no 2 raised to the power 0 (i.e., 1) involved?
      b. num = 1/3/5/7/... (an odd number)
        the binaries are:
          - 1 = 0001
          - 3 = 0011
          - 5 = 0101
          - 7 = 0111
          etc.
          notice how there's always one (i.e., 2 raised to the power 0) involved?

    2. Now, we use that concept and use the AND operator with the number and 1 because-
      X  Y  R
      0  0  0
      0  1  0
      1  0  0
      1  1  1 --> our use case for odd: odd with odd will always give a truthsy value.
    Therefore, when we compare any odd value with 1 we get something like this
      odd num's binary = .......1 (where the bit in period '.' notation maybe be turned off or on)
      one's binary = 00000001
    Hence, the AND operator would always be truthsy for odd numbers.
  */

  return 0;
}