// 백준_9295번_브론즈3_주사위 문제

#include<iostream>

using namespace std;

int main() {

	int T;
	int a, b;

	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;

		cout << "Case " << i << ": " << a + b << '\n';
	}



	return 0;
}