#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
int main() {
	int input_num;
	int max;
	int min;
	
	scanf("%d", &input_num);

	int *arr = (int *)malloc(input_num*sizeof(int));
	for (int i = 0; i < input_num; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < input_num; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d", min, max);
	free(arr);

	return 0;
}

