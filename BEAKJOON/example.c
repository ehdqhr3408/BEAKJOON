#pragma warning (disable : 4996)
#include <stdio.h>

void swap_t(int *a, int *b);
//����


int main() {
	
	int a = 4;
	int b = 8;
	printf("�Լ���:%d %d\n", a, b);
	swap_t(&a, &b);
	printf("�Լ���:%d %d\n", a, b);
	
	return 0;

}

void swap_t(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}