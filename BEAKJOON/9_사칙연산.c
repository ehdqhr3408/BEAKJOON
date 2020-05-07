#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	if (1 <= x || y <= 10000) {
		printf("%d\n", x + y);
		printf("%d\n", x - y);
		printf("%d\n", x * y);
		printf("%d\n", x / y);
		printf("%d", x % y);
	}
	else {
		return;
	}
	return 0;
}