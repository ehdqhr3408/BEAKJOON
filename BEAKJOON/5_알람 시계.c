#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= 0 && a <= 23 && b >= 0 && b <= 59) {
		b -= 45;
		if (b < 0) {
			b += 60;
			a -= 1;
			if (a < 0) {
				a += 24;
			}
		}
	}
	printf("%d %d\n", a, b);

	return 0;
}