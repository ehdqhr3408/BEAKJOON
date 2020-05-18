#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int score = 0;
		int combo = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				score += combo;
				combo++;
			}
			else if (arr[j] == 'X') {
				combo = 1;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}

