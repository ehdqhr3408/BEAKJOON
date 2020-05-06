#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x == 0 || y == 0)
		return 0;
	else if (x > 0 && y > 0)
		printf("1");
	else if (x > 0 && y < 0)
		printf("4");
	else if (x < 0 && y>0)
		printf("2");
	else
		printf("3");

	return 0;
}
