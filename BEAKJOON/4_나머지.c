#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#define div 42
int main() {
	int rest, x;
	int num[42] = { 0, };
	int cnt=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x);
		rest = x % div;
		num[rest]++;
	}
	
	for (int j = 0; j < 42; j++) {
		if (num[j] != 0)
			cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}

