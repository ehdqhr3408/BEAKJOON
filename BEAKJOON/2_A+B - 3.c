#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int num, a, b;
	scanf("%d", &num);
	while (num > 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		num--;
	}

	return 0;
}