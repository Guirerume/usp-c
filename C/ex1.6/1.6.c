#include <stdio.h>
#include <stdlib.h>


int main()
{
	int classmate;
	int maxgrade= 0;
	int mingrade= 100;
	int count;
	int grade;

	printf("How much stundents are in this class:");
	scanf("%d", &classmate);
	
	for(count= 1; count <= classmate; count++)
	{
		printf("\nInform the grade of the student %d:", count);
		scanf("%d", &grade);
				
		if(grade < 0 || grade > 100)
		{
			printf("\nPlease, insert a number <= 100 or >= 0");
			count--;
		}
		else
		{
			if(grade > maxgrade)
			{
				maxgrade= grade; 	
			}	
			else
			{	
			 maxgrade= maxgrade;
			}
			if(grade < mingrade )
			{
				mingrade= grade;
			}
			else
			{
				mingrade= mingrade;
			}
		}
	}
	printf("\nThe biggest note is %d and the lowest is %d.\n"
			, maxgrade, mingrade);
	exit(0);
	

}
