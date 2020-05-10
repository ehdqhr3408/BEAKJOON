#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[9];
	int max;
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			/*cnt = i+1 이 안되는 이유 -
			arr[0]이 이미 들어가 있어서 처음이 클경우, cnt값이 0으로 출력됨.*/
			cnt = i;
		}			
	}
	printf("%d\n", max);
	printf("%d", cnt+1);
	return 0;
}

