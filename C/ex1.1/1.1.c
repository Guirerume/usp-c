#include <stdio.h>
#include <stdlib.h>
/*
 * Your code only works for one single value. The requirement asks for a
 * collection of positive integers ending with 0.
 *
 * */
int main()
{
	int number, secnumber, thirnumber;
	number= 0; /* insert a space after '=' sign */
	secnumber= 0;
	thirnumber= 0;

	printf("Insert a collection of positive numbers: ");
	scanf("%d %d %d", &number, &secnumber, &thirnumber);

	if(number < 0 || secnumber < 0 || thirnumber < 0)
	{
		printf("Insert a number > 0. Please execute it again.\n");
		return 0;
	}
	else
	{
		number= number * number;
		secnumber= secnumber * secnumber;
		thirnumber= thirnumber * thirnumber;
		printf("They square are: %d, %d, %d\n", number, secnumber,
				thirnumber);	
	}
	
	return 0;
}

