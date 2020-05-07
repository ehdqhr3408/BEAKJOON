#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int a, b;
	
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d", a + b);
	}
	return 0;
}
