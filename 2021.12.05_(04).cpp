// 백준_2501번_브론즈3_약수 구하기 문제

#include<iostream>

using namespace std;

int arr[10001];

int main() {

	int N, K;
	int idx = 0;
	int ox = 0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			arr[++idx] = i;
		}
		if (arr[K] != 0) {
			++ox;
			cout << arr[K];
			break;
		}
	}
	if (ox == 0) {
		cout << 0;
	}



	return 0;
}