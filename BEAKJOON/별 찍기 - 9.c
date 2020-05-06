#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int input_num, height, star, empty;
	
	scanf("%d", &input_num);
	for(height=0;height<input_num;height++){
		for (empty = 0; empty < height; empty++) {
			printf(" ");
		}
		for (star = 2*input_num-1; star >height*2; star--) {
			printf("*");
		}
		printf("\n");
	}
	for (height = 0; height < input_num - 1; height++) {
		for (empty = input_num - 2; empty > height; empty--) {
			printf(" ");
		}
		for (star = 0; star < 2*height+3; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
