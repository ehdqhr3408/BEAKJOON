#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int input_num;
	scanf("%d", &input_num);
	for (int i = 0; i < 2 * input_num; i++) {
		for (int j = 0; j < input_num; j++) {
			if ((i + j) % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

