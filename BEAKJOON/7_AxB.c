#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	if (0 < x || y < 10) {
		printf("%d", x * y);
	}
	else {
		return;
	}
	return 0;
}