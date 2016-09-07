#include <stdio.h>
#include <stdlib.h>

int main()
{
	int factorial;
	int count;
	int result= 1;
	
	printf("Insert n!:");
	scanf("%d", &factorial);
	printf("\n%d:", factorial);
	
	for(count= factorial; count >=  1; count--)
	{
		printf("%d*", count);	
		result *= count;	
	}
	
	printf("=%d\n", result);
	exit(0);
}
