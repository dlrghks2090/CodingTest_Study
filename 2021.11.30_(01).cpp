// ����_2446��_�����3_�����-9 ����

#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = (-1)*N+1; i < N ; i++) {


		if (i <= 0) {
			for (int j = N - 1; j > i * (-1); j--) {
				cout << " ";
			}
			for (int j = 0; j <= i * 2 * (-1); j++) {
				cout << "*";
			}
			cout << '\n';
		}
		else {
			for (int j = N - 1; j > i ; j--) {
				cout << " ";
			}
			for (int j = 0; j <= i * 2 ; j++) {
				cout << "*";
			}
			cout << '\n';
		}
	}

	return 0;
}