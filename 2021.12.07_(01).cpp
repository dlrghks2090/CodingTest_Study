// 백준_9085번_브론즈3_더하기 문제

#include<iostream>

using namespace std;

int main() {

	int T;
	int N;
	int sol = 0;
	int arr[101] = { 0, };

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
			sol += arr[j];
		}
		cout << sol << '\n';
		sol = 0;
	}





	return 0;
}