// ����_2739��_�����3_������ ����

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