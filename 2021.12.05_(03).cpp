// 백준_10991번_브론즈3_별 찍기-16 문제

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