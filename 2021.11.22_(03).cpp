// 백준_DP_1309번_실버1_동물원 문제
// DP의 bottom - top 방식으로 풀어냈다.
// n=1일경우부터 4일경우까지를 직접 구해본 후 점화식을 구해냈다.
// 점화식	:	dp[i] = dp[i-1]*2 + dp[i-2]


#include<iostream>

using namespace std;

int dp[100001];

int main() {

	int N;

	cin >> N;

	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2; i <= N; i++) {
		dp[i] = (dp[i - 1] * 2 + dp[i - 2])%9901;
	}

	cout << dp[N];


	return 0;
}