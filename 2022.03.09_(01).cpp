// 2022.03.09_(01)
// 백준_DP_실버3_9461번_파도반 수열 문제

// i > 3 일때, arr[i] = arr[i-2] + arr[i-3] 의 점화식을 사용해서 풀어냈다.
// bottom - top 방식으로 풀어냈다.

#include<iostream>

using namespace std;

int main() {

	int T;
	int N;
	long long arr[102] = { 0, };

	cin >> T;

	for (int n = 0; n < T; n++) {

		cin >> N;

		for (int i = 1; i <= N; i++) {
			if (i <= 3) {
				arr[i] = 1;
			}
			else
				arr[i] = arr[i - 3] + arr[i - 2];
		}
		cout << arr[N] << '\n';

	}
	return 0;
}