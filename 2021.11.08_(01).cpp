// 백준_DP_2193번_실버3_이친수 문제
// DP의 bottom - top 방식을 사용하여 dp[3]부터 차례대로 dp의 값을 채워나갔다.
// dp 의 자료형을 int로 하면 90으로 갈수록 수의 크기가 int의 범위를 넘어 커지므로 long long 으로 지정

#include<iostream>

using namespace std;

long long dp[91];

int main() {

	int N;

	cin >> N;

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= N; i++) {

		// dp[i-1]은 맨 오른쪽 수가 0일때의 개수, dp[i-2]는 맨 오른쪽 수가 1일때의 개수
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[N];


	return 0;
}