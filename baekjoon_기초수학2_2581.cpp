// ���� ���ʼ���2_2581��
// �Ҽ�
// M : 10000������ �ڿ���	
// N : 10000������ �ڿ���
// M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵��� �հ� �ּڰ��� ����ϴ� ���α׷��� ������.
// M�� N���� �۰ų� ����.


#include <iostream>

using namespace std;


int main() {

	int M, N;
	int count = 0;
	int min = 0;
	int sum_of_sosu = 0;
	int ox = 0;

	cin >> M >> N;
	min = N;

	for (int i = M; i <= N; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
			if (M>10)
				continue;
		}
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				ox++;
			
		}
		if (ox == 2) {
			count++;
			sum_of_sosu += i;
			if (min > i)
				min = i;
		}
		ox = 0;
	}

	if (count != 0) {
		cout << sum_of_sosu << endl << min;
	}
	else
		cout << -1;

	return 0;
}