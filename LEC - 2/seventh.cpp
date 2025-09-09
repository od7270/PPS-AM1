#include <stdio.h>

int main() {
	float c, f;
	
	printf("Enter the temperature in degree celcius: ");
	scanf("%f", &c);
	
	f = (c * 9 / 5) + 32;
	printf("Your temperature in Fahrenheit is: %0.2f", f);
}