#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int count;
	int result= 0;

	printf("\n Insert a number:");
	scanf("%d", &n);
	
	for(count= 1; count <= n; count++)
	{
		if(n%count == 0)
		{			
			result= result + count;	
			if(result == n)
			{
				printf("\n It's a perfect number.");	
				count= n + 1;
			}
			
			else if(result > n)
			{
				printf("\n %d isn't a perfect number.",n);
				count= n + 1;
			}
			
			else	
			{
				
			}
		}
		
		else
		{
		
		}	

	}
	
	printf("\n");
	return 0;
}
