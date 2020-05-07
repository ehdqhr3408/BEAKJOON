#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++) {
		scanf("%d ", &z);
		if (z < y)
			printf("%d ", z);
	}	
	return 0;
}
