#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
int main() {
	int input_num;
	
	int max = 0;
	int min = 99999;
	scanf("%d", &input_num);
	int* arr = malloc(sizeof(input_num));
	for (int i = 0; i < input_num; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d", min, max);

	return 0;
}

