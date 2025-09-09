#include <stdio.h>

int main() {
	int a = 10, b = 10, c = 3, d;
	
	d = a == b && c;
	a = 4 && -1;
	
	printf("%d\n", d);
	printf("%d", a);
}