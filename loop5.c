#include <stdio.h>
int main()
{
	int n;
	int sum = 0;
	printf("Please enter numbers\n");
	scanf("%d", &n);
	while(n != 0)
	{
		sum = sum + n;
		scanf("%d", &n);
	}
	printf("%d\n", sum);

	return 0;
}
