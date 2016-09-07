#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number= 0;
	int count;
	int result= 0;
	
	printf("Insert a number:");
	scanf("%d", &number);

	for(count= 0; count <= number; count++)
	{
		if(count%2 == 0)
		{
			result += count;	
		}	
		
		else
		{
		
		}
	}
	
	printf("\n Result:%d\n", result);
	exit(0);

	
}
