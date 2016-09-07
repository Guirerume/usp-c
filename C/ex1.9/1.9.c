#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int j;
	int i;
	int count;
	int compare= 0;
	
	printf("Insert a number:");
	scanf("%d", &n);
	printf("\nInsert the first multiple:");
	scanf("%d", &i);
	printf("\nInsert the second multiple:");
	scanf("%d", &j);
	printf("\n");
	

	for(count= 0; count < n;)
	{			
		if(compare%i == 0 || compare%j == 0)
		{
			printf("%d,", compare);	
			count++;
		}	
		
		else
		{

		}
		
		compare++;	
	}
	printf("\n");
	exit(0);
}
