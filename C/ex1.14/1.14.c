#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fiblast;
	int fiblastest;
	int fibcu;
	int n;
	int count;

	printf("\n Insert a number to calculate its fibonacci:");
	scanf("%d", &n);

	for(count= 1; count <= n; count++)
	{
		if(count == 1 || count == 2)
		{
			fiblast= 1;
			fiblastest= 1;
			fibcu= 1;
		}
		else	
		{
			fibcu= fiblast + fiblastest;
			fiblastest= fiblast;
			fiblast= fibcu;
		}

	}
	printf("\n Fibonacci of %d is %d.\n", n, fibcu);
	return 0;
}
