// 백준_2525번_브론즈4_오븐 시계 문제

#include<iostream>

using namespace std;

int main() {

	int A, B, C;
	int tmp = 0;

	cin >> A >> B;
	cin >> C;

	tmp = B + C;

	A += tmp / 60;
	A %= 24;
	B = tmp % 60;

	cout << A << " " << B;



	return 0;
}