// ����_10991��_�����3_�� ���-16 ����

#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int k = N - i; k >= 1; k--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << '\n';
	}


	return 0;
}