// 백준_DP_1699번_실버3_제곱수의 합 문제
// DP의 bottom - top 방식을 사용해 문제를 풀어냈다.
// 점화식 : j*j == i 일때, dp[i] = min(dp[i], 1)
//			j*j < i 일때, dp[i] = min(1+dp[i-j*j],dp[i])

#include<iostream>
#include<algorithm>

using namespace std;

int dp[100001];
int main() {

	int N;

	cin >> N;

	// dp의 모든 값을 10000으로 초기화
	fill(dp, dp + 100001, 10000);

	for (int i = 1; i <= N; i++) {

		for (int j = 1; j*j <= i; j++) {
			// 제곱수가 해당값과 일치할때, 그 해당값의 dp값 = 1
			if (j * j == i) {
				dp[i] = min(dp[i], 1);
				
			}
			// 가장 큰 제곱수 = 1 , 해당값에서 가장 큰 제곱수를 뺀 나머지값의 dp값 = dp[i -j*j]    두 값을 합한 값중 가장 작은값을 해당값의 dp로 저장
			else {
				dp[i] = min(1 + dp[i - j * j], dp[i]);
			}
		}
	

	}

	cout << dp[N];

	return 0;
}