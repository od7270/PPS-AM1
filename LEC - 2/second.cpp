#include <stdio.h>

int main() {
	int q1, q2, q3, qTotal, midTerm, final, gTotal;
	
	printf("=======Quizzes===============");
	
	printf("\nEnter the score of the first quiz:\t");
	scanf("%d", &q1);
	
	printf("\nEnter the score of the second quiz:\t");
	scanf("%d", &q2);
	
	printf("\nEnter the score of the third quiz:\t");
	scanf("%d", &q3);
	
	qTotal = q1 + q2 + q3;
	

	printf("\n=======Mid-term==============");
	
	printf("\nEnter the score of the mid-term:\t");
	scanf("%d", &midTerm);
	
	
	printf("\n=======Final=================");
	
	printf("\nEnter the score of the final:\t");
	scanf("%d", &final);
	
	gTotal = qTotal + midTerm + final;
	
	printf("\n\nQuiz Total: %d", qTotal);
	printf("\nMid-Term: %d", midTerm);
	printf("\nFinal: %d", final);
	printf("\n........................");
	printf("\nTotal: %d", gTotal);
}