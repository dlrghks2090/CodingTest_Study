// 백준_10797번_브론즈4_10부제 문제

#include<iostream>

using namespace std;

int main() {

	int date;
	int car[5] = { 0, };
	int sol = 0;

	cin >> date;

	for (int i = 0; i < 5; i++) {
		cin >> car[i];
		if (car[i] == date) {
			++sol;
		}
	}

	cout << sol;


	return 0;
}