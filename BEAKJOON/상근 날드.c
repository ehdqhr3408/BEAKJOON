#pragma warning (disable : 4996)
#include <stdio.h>

int main() {
	int food[3];
	int cpfood=9999;
	int drink[2];
	int cpdrink = 9999;
	int set;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &food[i]);
		if (cpfood > food[i])
			cpfood = food[i];
	}
	for (int j = 0; j < 2; j++) {
		scanf("%d", &drink[j]);
		if (cpdrink > drink[j])
			cpdrink = drink[j];
	}
	set = cpfood + cpdrink - 50;
	printf("%d", set);
	return 0;
}
