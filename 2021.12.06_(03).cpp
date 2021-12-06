// 백준_2576번_브론즈3_홀수 문제

#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[7] = { 0, };
	int sol = 0;
	int min_odd = 100;	// 입력값이 100보다 작은 자연수이므로 최소값을 100으로 초기화
	int exist_odd = 0;

	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1) {
			++exist_odd;
			sol += arr[i];
			min_odd = min(min_odd, arr[i]);
		}
	}

	// 주어진 수에 홀수가 없을시 -1을 출력하고 종료
	if (exist_odd == 0) {
		cout << -1;
		return 0;
	}

	cout << sol << '\n';
	cout << min_odd;


	return 0;
}