// 백준_2475번_브론즈5_검증수 문제

#include<iostream>

using namespace std;

int main() {

	int sol = 0;

	int arr[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];

		sol += arr[i] * arr[i];
	}

	cout << sol % 10;



	return 0;
}