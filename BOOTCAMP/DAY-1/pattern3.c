#include <stdio.h>
int main()
{
	int n = 5;
	char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}