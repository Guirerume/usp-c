#include<stdio.h>
#include<stdlib.h>

int main()
{
	int p;	
	int count;

	printf("\n Insert a number to check if this number is a prime:");
	scanf("%d", &p);

	for(count= 2; count <= p; count++)	
	{
		if(p%count == 0 && count != p)
		{
			printf("\n It's not a prime number.\n");
			count += p;	
		}

		else if(p%count == 0 && count == p)
		{
			printf("\n It's a prime number.\n");
		}
	
		else
		{
		
		}
	}
	
	exit(0);
}
