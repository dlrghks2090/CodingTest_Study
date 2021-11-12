// 백준_DP_15988번_실버2_1,2,3 더하기 3 문제
// DP 의 bottom - top 방식을 사용해 풀어냈다.
// dp 에 1000000009로 나눈 나머지 값이 들어가는데, 이 값이 최대 10억자리이므로 dp를 long long 으로 선언해야 오류가 나지 않는다.
// 점화식 : dp[i] = dp[i-1] + dp[i-2] + dp[i-3] ( i>= 4 일때 )

#include<iostream>

using namespace std;

long long dp[1000001];

int main() {

	int T;
	int n;

	cin >> T;


	
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	/*
	dp[4] = 7;
	dp[5] = 13;
	*/

	for (int i = 4; i <= 1000000; i++) {
		dp[i] = ( dp[i - 1] + dp[i - 2] + dp[i - 3] ) % 1000000009;
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << dp[n] << '\n';
	}
	

	return 0;
}