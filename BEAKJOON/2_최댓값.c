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
			/*cnt = i+1 �� �ȵǴ� ���� -
			arr[0]�� �̹� �� �־ ó���� Ŭ���, cnt���� 0���� ��µ�.*/
			cnt = i;
		}			
	}
	printf("%d\n", max);
	printf("%d", cnt+1);
	return 0;
}

