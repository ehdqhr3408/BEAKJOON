#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	double* score;
	int cnt;
	double max = 0;
	double sum = 0;
	scanf("%d", &cnt);
	score = malloc(sizeof(double) * cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max)
			max = score[i];
	}
	for (int j = 0; j < cnt; j++) {
		score[j] = score[j] / max * 100;
		sum += score[j];
	}
	printf("%lf", sum / cnt);
	free(score);
	return 0;
}

