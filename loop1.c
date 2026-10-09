#include <stdio.h>
int main ()
{
	int n = 0;
	printf("Enter a positive number\n");
	scanf("%d", &n);
	int i;

	for (i = 1; i <= n; i++){
		printf("%d\n", i);
	}

	return 0;
}

