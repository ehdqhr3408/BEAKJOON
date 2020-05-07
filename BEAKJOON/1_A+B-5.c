#include <stdio.h>
#pragma warning (disable : 4996)
int main() {

	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a > 0 && b < 10) {
			printf("%d\n", a + b);
		}
		else if (a == 0 && b == 0)
			break;
	}

	return 0;
}

