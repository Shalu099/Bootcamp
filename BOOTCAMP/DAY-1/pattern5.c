#include <stdio.h>
int main()
{
	int n = 5;
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}