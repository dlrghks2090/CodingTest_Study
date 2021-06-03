// 백준 수학_10039번
// 평균 점수 문제

#include <iostream>

using namespace std;

int main() {

	int arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] < 40) {
			arr[i] = 40;
		}
	}

	cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;


	return 0;
}