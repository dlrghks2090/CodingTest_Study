// 백준_3460_브론즈3_이진수 문제

#include<iostream>
#include<queue>

using namespace std;

int main() {

	int T;
	int n;
	int count = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		count = 0;
		cin >> n;

		while (n >= 2) {
			if (n % 2 == 1) {
				cout << count << " ";
			}
			n = n / 2;
			++count;
		}
		if (n == 1) {
			cout << count;
		}
		cout << '\n';

	}
	


	return 0;
}