#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numA;
	int numB;
	int result;
	int count;
	numA= 0;
	numB= 0;
	result= 0;
	count= 0;

	printf("Insert the first number:");
	scanf("%d", &numA);
	printf("\nInsert the second number:");
	scanf("%d", &numB);
	
	for(count = 1; count <= numA; count++)
	{
		if( !(count%numA == 0 && count%numB == 0) )
		{
			result= count;
				
		}	
		
		else
		{
	
		}		
		
	}
	
	printf("\nMDC:%d\n", result);
	return(0);
}
