// 백준 수학_2953번_브론즈3
// 나는 요리사다 문제

#include <iostream>
#include <vector>

using namespace std;


int main() {

	int arr[5][4] = { 0, };
	int score_arr[5] = { 0, };
	int max = 0;
	int max_idx = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			score_arr[i] += arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		if (max < score_arr[i]) {
			max = score_arr[i];
			max_idx = i;
		}
	}

	cout << max_idx + 1 << " " << max;

	return 0;
}