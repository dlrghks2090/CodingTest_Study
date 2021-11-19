// 백준_DP_11054번_골드3_가장 긴 바이토닉 부분 수열 문제
// DP의 bottom - top 방식으로 풀이했다.
// 골드 난이도라 그런지 그동안의 dp 문제를 응용시킨 문제였다.
// 이 문제의 핵심은 두개의 dp값을 구해서 풀이하는 부분이다.
// 점화식	:	arr[i] > arr[j]일때, dp[i][0] = max(dp[i][0], dp[j][0] + 1)
//				arr[i] > arr[j]일때, dp[i][1] = max(dp[i][1], dp[j][1] + 1)

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][2] = { 1, };
int arr[1001];

int main() {

	int N;
	int sol = 0;

	cin >> N;

	fill(&dp[0][0], &dp[1000][2], 1);

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	// 해당값의 왼쪽에서 해당값보다 작은 증가하는 수열의 수를 구한다.
	for (int i = 2; i <= N; i++) {

		for (int j = 1; j <= i - 1; j++) {
			if (arr[i] > arr[j]) {
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			}
		}	
	}
	// 해당값의 오른쪽에서 해당값보다 작은 감소하는 수열의 수를 구한다.
	for (int i = N-1; i >= 1; i--) {

		for (int j = N; j >= i+1; j--) {
			if (arr[i] > arr[j]) {
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
			}
		}
	}

	for (int i = 1; i <= N; i++) {

		// 두가지 dp에 모두 자기자신을 포함시켰으므로 1을 빼준다.
		sol = max(sol, dp[i][0] + dp[i][1] - 1);
	}

	/*
	for (int i = 1; i <= N; i++) {
		cout << "dp[" << i << "] = " << dp[i][0]+dp[i][1]-1 << '\n';
	}
	*/
	

	cout << sol;


	return 0;
}