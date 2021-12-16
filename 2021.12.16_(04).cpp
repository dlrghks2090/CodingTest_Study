// 백준_5800번_실버5_성적 통계 문제
// algorithm 라이브러리의 sort STL을 사용해 쉽게 풀어냈다.
// 내림차순을 할 때는 마지막에 greater<int>() 를 추가해 준다.

#include<iostream>
#include<algorithm>

using namespace std;

int arr[51];

int main() {

	int K;
	int N;
	int gap;

	cin >> K;

	for (int i = 1; i <= K; i++) {
		gap = 0;
		cout << "Class " << i << '\n';
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + N, greater<int>());
		for (int jj = 1; jj < N; jj++) {
			gap = max(gap, arr[jj-1] - arr[jj]);
		}

		cout << "Max " << arr[0] << ", Min " << arr[N - 1] << ", Largest gap " << gap << '\n';
	}
	


	return 0;
}