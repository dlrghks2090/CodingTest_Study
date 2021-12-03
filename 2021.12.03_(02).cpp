// 백준_5522번_브론즈5_카드 게임 문제

#include<iostream>

using namespace std;

int main() {

	int sol = 0;
	int tmp;



	for (int i = 1; i <= 5; i++) {
		cin >> tmp;
		sol += tmp;
	}

	cout << sol;


	return 0;
}