#include <stdio.h>

int main() {
	float dividend, divisor;
	int q;
	
	printf("Enter the divident & divisor: ");
	scanf("%f %f", &dividend, &divisor);
	
	q = dividend / divisor;
	printf("%d", q);
	
	return 0;
}