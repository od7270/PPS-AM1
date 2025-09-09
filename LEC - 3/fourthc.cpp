#include <stdio.h>

int main() {
	int x = 6, y = 15, z;
	
	z = x++ < 10 && x + y < 20;
	
	printf("%d\n", z);
}