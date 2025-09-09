#include <stdio.h>

int main() {
	int x, y, s, p, total;
	
	printf("Enter 2 Numbers x & y (separated by comma ','): ");
	scanf("%d, %d", &x, &y);
	
	p = x * y;
	s = x + y;
	
	total = s*s + p*(s-x)*(p+y);
	
	printf("Total: %d", total);
}