#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x = 0, y = 0, z = 0;
	scanf("%d %d %d", &x, &y, &z);
	if (2 <= x || z <= 10000) {
		printf("%d\n", (x + y) % z);
		printf("%d\n", (x % z + y % z) % z);
		printf("%d\n", (x * y) % z);
		printf("%d\n", (x % z * y % z) % z);
	}
	else {
		return;
	}
	return 0;
}