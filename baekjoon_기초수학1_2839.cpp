// ���� ���� ����1_2839��
// ���� ��� ����
// 5kg ��������, 3kg ���������� �����Ѵ�.
// N kg�� ����Ҷ�, �ִ��� ���� ������ ������ �� �ִ� ���α׷��� �ϼ��ض�
// ��, ��Ȯ�� N kg �� ���� �� ���ٸ� -1�� ����Ѵ�.


// 5�� ������ ��, 1�� ���ų� 4�� ������ 5kg�� �ѹ� ���� 3kg���� ä���.
// 5�� ������ ��, 2�� ���´ٸ� �׶� 5�� ���� ���� 2 �̻��̸� 5kg�� �ι� ���� 3kg���� ä���.
// 5�� ������ ��, 3�� ���´ٸ� 3kg���� ä���ش�.

#include <iostream>


using namespace std;

int main() {

	int N;
	int num_of_five = 0;
	int num_of_three = 0;
	int count = 0;

	do {
		cin >> N;
	} while (N < 3 || N>5000);

	if (N % 5 == 0) {
		num_of_five = N / 5;
	}
	else if (N % 5 == 1 || N % 5 == 4) {
		if (N / 5 > 0) {
			num_of_five = N / 5 - 1;
			num_of_three = (N % 5 + 5) / 3;
		}
		else
			count = -1;
	}
	else if (N % 5 == 2) {
		if (N / 5 >= 2) {
			num_of_five = N / 5 - 2;
			num_of_three = (N % 5 + 10) / 3;
		}
		else
			count = -1;

	}
	else if (N % 5 == 3) {
		num_of_five = N / 5;
		num_of_three = (N % 5) / 3;
	}
	
	count = count + num_of_five + num_of_three;

	cout << count;


	return 0;
}