#include <stdio.h>

int main() {
	long int h, m, s, total;
	
	printf("hours: ");
	scanf("%d", &h);
	
	printf("\nminutes: ");
	scanf("%d", &m);
	
	printf("\nseconds: ");
	scanf("%d", &s);
	
	total = (h * 3600) + (m * 60) + s;
	printf("\n\nTotal: %d seconds", total);
}