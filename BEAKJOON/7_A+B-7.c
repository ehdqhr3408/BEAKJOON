#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		scanf("%d%d", &y, &z);
		printf("Case #%d: %d\n",i+1, y + z);
	}
	return 0;
}
