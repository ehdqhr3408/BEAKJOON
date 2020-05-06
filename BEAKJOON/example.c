#pragma warning (disable : 4996)
#include <stdio.h>

void swap_t(int *a, int *b);
//예시


int main() {
	
	int a = 4;
	int b = 8;
	printf("함수전:%d %d\n", a, b);
	swap_t(&a, &b);
	printf("함수후:%d %d\n", a, b);
	
	return 0;

}

void swap_t(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}