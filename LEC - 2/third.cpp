#include <stdio.h>

int main() {
	char stdName[15];
	char regNo[15];
	char addr[999];
	int age;
	float wgt;
	double hgt;
	float cgpa;
	
	printf("Enter the name of the student: ");
	scanf("%s", &stdName);
	
	printf("\nRegistration Number: ");
	scanf("%s", &regNo);
	
	printf("\nEnter CGPA/Percentage: ");
	scanf("%f", &cgpa);
	
	
	printf("\n\nName of the student: %s", stdName);
	printf("\nRegistration Number: %s", regNo);
	printf("\nSecured Percentage: %0.1f", cgpa);
	
	return 0;
}