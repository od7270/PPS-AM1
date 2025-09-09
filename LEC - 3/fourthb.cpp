#include <stdio.h>

int main() {
	int a = 5, b = 6, c = 7, d = 4, e;
	
	e = a > b && c > d || a > d;
	
	printf("%d\n", e);
}