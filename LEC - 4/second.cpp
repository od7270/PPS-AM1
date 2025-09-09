// Check for Leap Year

#include <stdio.h>
#include <stdbool.h>

int main() {

  int year;
  bool leap;

  printf("Enter the year to check leap: ");
  scanf("%d", &year);

  leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
  leap ? printf("%d is a leap year", year) : printf("%d is not a leap year", year);

  return 0;
}