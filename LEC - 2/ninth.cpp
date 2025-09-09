#include <stdio.h>

int main() {
	int shares;
	float pprice, sprice, profit;
	
	
	printf("Number of shares purchased: ");
	scanf("%d", &shares);
	
	printf("\nBuying Price of Shares: ");
	scanf("%f", &pprice);
	
	printf("\nSelling Price of Shares: ");
	scanf("%f", &sprice);
	
	profit = (shares * sprice) - (shares * pprice);
	
	printf("You have made a profit of $%0.2f since you bought %d shares of this stock.", profit, shares);
}