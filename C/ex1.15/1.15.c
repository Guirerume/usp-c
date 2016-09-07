#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int j;
	int m;
	int count;

	printf("Insert a number to check its congruent:");
	scanf("%d", &j);
	printf("\nInsert a number to be the module:");
	scanf("%d", &m);
	n= j % m;
	printf("\n");

	for(count= 1; count <= j; count++)
	{
		if(count % m == n)
		{
			printf("%d is congruent module %d for %d.\n", j, m, count);
		}

		else
		{
			
		}
	}
	
	return 0;	

}
