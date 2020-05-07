#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int a = 0, b = 0;
	scanf("%d\n%d", &a, &b);

	int b100 = b / 100;
	int b10 = (b - (b100 * 100)) / 10;
	int b1 = (b - (b100 * 100) - (b10 * 10));

	printf("%d\n", a * b1);
	printf("%d\n", a * b10);
	printf("%d\n", a * b100);
	printf("%d\n", a * b);

	return 0;
}