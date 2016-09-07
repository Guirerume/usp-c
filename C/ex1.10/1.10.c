#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int result= 0;

	printf("Insert a number:");
	scanf("%d", &n);

	while(result < n)
	{
		if( (result+1) * (result+2) * (result+3)== n)
		{
			result= n;
			printf("\nIt's a triangular\n");
		}
		else if( (result+1) * (result+2) * (result+3) > n)
		{
			result= n;
			printf("\nIt isn't a triangular\n");
		}	
		else
		{
			result++;
		}
	}
	printf("%d", result);
	exit(0);
}
