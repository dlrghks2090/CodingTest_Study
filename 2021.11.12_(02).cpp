// ����_2442��_�����3_�� ���-5 ����
#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = N - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}


	return 0;
}