// 백준_10995번_브론즈2_별 찍기-20 문제

#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		
		if (i % 2 == 1) {
			for (int j = 1; j <= N; j++) {
				cout << "* ";
			}
			cout << '\n';
		}
		else {
			for (int j = 1; j <= N; j++) {
				cout << " *";
			}
			cout << '\n';
		}
	}



	return 0;
}