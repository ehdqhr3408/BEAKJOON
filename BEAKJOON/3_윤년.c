#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int a;
	scanf("%d", &a);
	if (a % 4 == 0) {
		if (a % 100 != 0 || a % 400 == 0) {
			printf("1\n");
		}
		else
			printf("0\n");
	}
	else
		printf("0\n");

	return 0;
}