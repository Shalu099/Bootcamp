#include <stdio.h>
int main()
{
	int n = 40000;
	int meter = 100 * n;
	printf("%d cm in meter:", meter);
	int gram = n / 1000;
	printf("\n%d kg in gram", gram);

	return 0;
}
