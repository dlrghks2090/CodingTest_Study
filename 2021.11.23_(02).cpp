// ����_2522��_�����3_�� ���-12 ����

#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i < N * 2; i++) {
		if (i <= N) {
			for (int j = 1; j <= N - i; j++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << '\n';
		}
		else {
			for (int j = 1; j <= i - N; j++) {
				cout << " ";
			}
			for (int j = 1; j <= N*2-i; j++) {
				cout << "*";
			}

			cout << '\n';
		}
	}



	return 0;
}