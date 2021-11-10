// 백준_DP_1912번_실버2_연속합 문제
// DP의 bottom - top 방식으로 풀어냈다.
// 점화식 : dp[i] = max(dp[i - 1] + arr[i], arr[i])
// 점점 DP문제에 익숙해지고 있다.

#include<iostream>
#include<algorithm>

using namespace std;

long long arr[100001];

long long dp[100001];

int main() {

	int n;
	long long tmp = 0;
	long long sol = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// 원소가 1개일 경우를 대비해 sol값을 arr[1]값으로 초기화
	sol = arr[1];

	dp[1] = arr[1];

	// dp의 성질을 이용해 답을 구한다.
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		sol = max(dp[i], sol);
	}
	

	cout << sol;



	return 0;
}