#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number;
	scanf("%d", &number);

	while (number > 0) {
		printf("%d ", number * number);
		scanf("%d", &number);
	}

	printf("\n");
	return 0;
}

