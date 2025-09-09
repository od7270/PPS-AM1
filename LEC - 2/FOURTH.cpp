#include <stdio.h>

int main() {
	char stdName[15], regNo[15], addr[999];
	float age, wgt, cgpa, ageM, wgtKg, hgt, hgtm;
	
	printf("Enter the name of the student: ");
	scanf("%s", &stdName);
	
	printf("\nRegistration Number: ");
	scanf("%s", &regNo);
	
	printf("\nEnter CGPA/Percentage: ");
	scanf("%f", &cgpa);
	
	printf("\nAge in years: ");
	scanf("%f", &age);
	ageM = age * 12;
	
	printf("\nWeight in gram: ");
	scanf("%f", &wgt);
	wgtKg = wgt / 1000;
	
	printf("\nHeight in cm: ");
	scanf("%f", &hgt);
	hgtm = hgt / 100;
	
	
	printf("\n\nName of the student: %s", stdName);
	printf("\nRegistration Number: %s", regNo);
	printf("\nAge in months: %0.2f", ageM);
	printf("\nWeight in kilograms: %0.2f", wgtKg);
	printf("\nHeight in meters: %0.2f", hgtm);
	printf("\nSecured Percentage: %0.1f", cgpa);
	
	return 0;
}