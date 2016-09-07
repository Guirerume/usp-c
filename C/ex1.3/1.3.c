#include <stdio.h> /* insert a space after include statement */
#include <stdlib.h> /* insert a space after include statement */

/*
 * You are printing the N first odd numbers but you are not printing as
 * expected.
 *
 * You can improve this code using just one for. Think better about this code
 *
 * I would pass it if were NOT printing "ODD" and "\n" because they are not
 * asked
 *
 * */

int main()
{
	int number;
	int count;
	int result;
	result= 0;
	count= 0;

	printf("Insert a number:");
	scanf("%d", &number); /* insert a space after comma */
	
	if(number <= 0 )
	{
		printf("\nPlease, insert a number > 0 .\n");
		exit(EXIT_FAILURE); /* use exit(EXIT_FAILURE) */
	} /* do NOT separate else with TWO EMPTY FUCKING LINES */
	
	else
	{
		for (count = 0; count < number;)
		{ /* another annoying empty line */	
			if(result%2 == 0)/* fix this line*/
			{
				result++;/* fix this line (white spaces)*/
			}	/* ~1 */

			else
			{
				/* no need for '\n' at the beginning*/
				printf("ODD:%d\n",result);
				count++;
				result++;
			}/* ~1 */

		}
	}

	exit(0);
}
