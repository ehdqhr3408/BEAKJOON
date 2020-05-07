#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int n;
	int hap = 0;
	scanf("%d", &n);
	if (n >= 1 && n <= 10000) {
		for (int i = 1; i <= n; i++) {
			hap += i;
		}
		printf("%d\n", hap);
	};

	return 0;
}