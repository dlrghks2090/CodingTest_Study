// ���� 1075��_�����2_������ ����
// ������ ���� �� ���ڸ��� ������ �ϹǷ� ó������ 00���� ������� �����Ѵ�.
// 00���� ���� N�� F�� ���� ���������� F�� �Ǳ���� ���ڶ� ���� �� ���ڸ� ���� �ȴ�.
// but �������� 0�϶��� 00�� �� ���ڸ� ���� �ȴ�.

#include<iostream>

using namespace std;


int main() {

	long long N;
	int F;
	int tmp;
	int last;
	int sol;

	cin >> N;
	cin >> F;



	tmp = N % 100;

	N = N - tmp;

	last = N % F;

	if (last == 0) {
		sol = 0;
	}
	else {
		sol = F - last;
	}

	if (sol < 10) {
		cout << 0 << sol;
	}
	else {
		cout << sol;
	}


	return 0;
}