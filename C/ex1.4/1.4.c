#include <stdio.h>
#include <stdlib.h>

int main()
{

	int base= 0;
	int potency= 0;
	int result= 0;	
	int count;

	printf("\nInsert the potency number:");
	scanf("\n%d", &potency);
	printf("\nInsert a number:");
	scanf("\n%d", &base);
	result= base;

	if(potency < 0)
	{
		printf("\nYou need to insert a number > 0\n");	
	}	

	else
	{
		for(count= 1; count <  potency; count ++)
		{
			result *= base;
		}
		printf("\nResult:%d\n", result);
	}
	exit(0);
}
