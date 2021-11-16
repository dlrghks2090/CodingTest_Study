// 백준_2739번_브론즈3_구구단 문제

#include<stdio.h>

int main(void) {

	int N;


	while (1) {
		scanf("%d", &N);
		if (1 <= N <= 9) {
			break;
		}
	}

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", N, i, N * i);
	}

	return 0;
}