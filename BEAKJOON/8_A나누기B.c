#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	double x = 0, y = 0;
	scanf("%lf %lf", &x, &y);
	if (0 < x || y < 10) {
		printf("%.9lf", x / y);
	}
	else {
		return;
	}
	return 0;
}