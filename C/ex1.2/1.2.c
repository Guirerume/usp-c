#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int sum = 0;

    scanf("%d", &n);
    printf("\n");

	for(int count = 0; n >= count; count++) {
        sum += count;
	}

	printf("%d", sum);
	return 0;
}

