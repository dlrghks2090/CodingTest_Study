// 백준_10178번_브론즈3_할로윈의 사탕 문제


#include<iostream>

using namespace std;

int main() {

	int T;

	int c, v;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> c >> v;

		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << '\n';
	}



	return 0;
}