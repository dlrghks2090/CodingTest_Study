// ���� 1010��
// �ٸ� ���� ����
#include <iostream>

using namespace std;

// mCn : m���߿� ������ ���������ʰ� n���� �����ϴ� ������
int main() {

	int T;
	int* M;
	int* N;
	double sol = 1;
	int n_ = 1;

	cin >> T;

	M = new int[T];
	N = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> N[i] >> M[i];
	}

	for (int i = 0; i < T; i++) {
		for (int j = M[i]; j > M[i] - N[i]; j--) {
			sol = (double)sol * j / n_;
			++n_;
		}
		cout << (int)sol << endl;
		n_ = 1;
		sol = 1;
	}

	return 0;
}