#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
int main() {
	char** arr = { 0, };
	int x, y;
	scanf("%d %d", &x, &y);
	*arr = malloc(sizeof(char) * (x+1));
	for (int i = 0; i < x; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < x; i++) {
		printf("%s", arr[i]);
	}
	

	free(arr);
	return 0;
}

