// ���� ���ʼ���1_2839��
// ���� ��� ����
// 3kg ¥�� ���������� 5kg ¥�� ���������� �ִ�
// ��� �� �� �ִ��� 5kg¥�� ���������� ���� ì����� �Ѵ�.
// N : ����� ���� kg ��
// ���������� ������ ���� ���϶�.
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