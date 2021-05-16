// 백준 기초수학1_2839번
// 설탕 배달 문제
// 3kg 짜리 설탕봉지와 5kg 짜리 설탕봉지가 있다
// 배달 할 때 최대한 5kg짜리 설탕봉지를 많이 챙기려고 한다.
// N : 배달할 설탕 kg 수
// 가져가야할 봉지의 수를 구하라.
#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	int c = 0;
	int N;


	while (1) {
		scanf_s("%d", &N);
		if (3 <= N <= 5000) {
			break;
		}
	}

	a = N / 5;


	while (1) {
		b = N - a * 5;
		c = a + b / 3;
		if (N % 5 == 0) {
			printf("%d", a);
			break;
		}
		else if (b % 3 == 0) {

			printf("%d", c);
			break;
		}
		else if (a == 0) {
			printf("%d", -1);
			break;
		}
		a = a - 1;
	}
	return 0;
}