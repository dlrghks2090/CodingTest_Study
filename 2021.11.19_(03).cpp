// 백준_DP_11722번_실버2_가장 긴 감소하는 부분 수열 문제
// DP의 bottom - top 방식을 사용해 풀어냈다.
// 점화식 : arr[j] > arr[i]일때,  dp[i] = max(dp[i], dp[j] + 1)
//         j<i인 루프에서 dp[i]의 최대값을 찾고 
//		   dp[N]까지 해당 dp의 값이 정해질때마다 sol에 최대 길이값을 계속 업데이트 시킨다.



#include<iostream>
#include<algorithm>

using namespace std;

long long dp[1001];
int arr[1001];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	fill(dp, dp + 1001, 1);

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sol = dp[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {

			if (arr[j] > arr[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		sol = max(sol, dp[i]);
	}

	cout << sol;

	return 0;
}