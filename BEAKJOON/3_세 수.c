#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max, middle, min;
	if (a >= 1 && b >= 1 && c >= 1 && a <= 100 && b <= 100 && c <= 100) {
		max = a > b ? a : b;
		max = max > c ? max : c;
		min = a < b ? a : b;
		min = min < c ? min : c;
		middle = a + b + c - max - min;
		printf("%d", middle);
	}

	return 0;
}

