#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
//�ٽ� Ǯ���!
int main() {
	int a, b, c;
	int num[10] = { 0, };
	int rest;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a*b*c;

	while (sum > 0) {
		rest = sum % 10;
		sum /= 10;
		num[rest]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}

