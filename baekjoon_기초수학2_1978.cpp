// ���� ���ʼ���2_1978qjs
// �Ҽ� ã�� ����
// �־��� �� N�� �߿��� �Ҽ��� �� ������ ã�� ���α׷��� ������.

#include <iostream>

using namespace std;

int main() {

	int N;
	int* num;
	int ox = 0;
	int count = 0;

	cin >> N;
	num = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0)
				ox++;
		}
		if (ox == 2)
			count++;
		ox = 0;
	}

	cout << count;





	delete[] num;

	return 0;
}