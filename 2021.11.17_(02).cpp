// 백준_2444번_브론즈3_별 찍기-7 문제

#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N*2-1; i++) {

		if (i <= N) {
			for (int j = N - i; j >= 1; j--) {
				cout << " ";
			}

			for (int j = 1; j <= i * 2 - 1; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 1; j <= i - N; j++) {
				cout << " ";
			}

			for (int j = (N * 2 - i) * 2 - 1; j >= 1; j--) {
				cout << "*";
			}
		}

		cout << '\n';
	}

	


	return 0;
}