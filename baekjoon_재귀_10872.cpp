// ���� ���_10872��
// ���丮�� ����
// 0���� ũ�ų� ���� ���� N�� �Է����� �־�����, N!�� ����ϴ� ���α׷��� �ۼ��ض�.

#include <iostream>

using namespace std;


int factorial(int n) {

	int sol = 1;
	for (int i = 1; i <= n; i++) {
		sol *= i;
	}

	return sol;
}


int main() {

	int N;

	cin >> N;

	cout << factorial(N);

	return 0;
}