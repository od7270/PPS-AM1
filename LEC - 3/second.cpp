#include <stdio.h>

int main() {
	float a, b, c, gVal;
	
	printf("Enter 3 numbers to find the greatest one among them: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a > b && a > c) {
		printf("%0.2f is the greatest among them", a);
	} else if (b > a && b > c) {
		printf("%0.2f is the greatest among them", b);
	} else if (c > b && c > a) {
		printf("%0.2f is the greatest among them", c);
	} else if (a == b && a == c && b == c) {
		printf("All the values are equal!");
	} 
	
	return 0;
}