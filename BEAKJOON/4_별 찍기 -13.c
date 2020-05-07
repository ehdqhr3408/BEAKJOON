#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}
	for (int k = x-1; k > 0; k--) {
		for (int z = 0; z < k; z++)
			printf("*");
		printf("\n");
	}
	return 0;
}
