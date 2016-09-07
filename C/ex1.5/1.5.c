#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day;
	int disk;
	int count;
	int mostdisk;

	for(count= 1; count <= 31; count++) 
	{
		printf("\nInform how many discs did you sell in day %d:", count);
		scanf("%d", &disk);
		
		if(disk > mostdisk) 
		{
			day= count;
			mostdisk= disk;	
		}	
		
		else /* are you kidding me? */
		{
		
		}
		
	}
	
	printf("The day %d you selled %d disk! That was you best day!\n"
			, day, mostdisk);
	exit(0);
}
