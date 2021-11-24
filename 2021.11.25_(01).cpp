// 백준_2445번_브론즈3_별 찍기-8 문제


#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N * 2; i++) {


		if (i <= N) {

			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			for (int j = i * 2; j < N * 2; j++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << '\n';

		}
		else {
			for (int j = i; j < N*2; j++) {
				cout << "*";
			}
			for (int j = (2*N-i)*2; j < N * 2; j++) {
				cout << " ";
			}
			for (int j = i; j < N*2; j++) {
				cout << "*";
			}
			cout << '\n';
		}


	}


	return 0;
}