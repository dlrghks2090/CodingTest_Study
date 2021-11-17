// 백준_DP_11057번_실버1_오르막 수
// DP의 bottom - top 방식을 사용하여 풀어냈다.
// 점화식 : dp[j][i] = dp[j-1][i] + ......+ dp[j-1][1];
// 아쉬운점은 for문을 3개 중첩해서 사용한 점이다. 좀 더 좋은 코드로 짤 수 있는지 고민해봐야할 것 같다.

#include<iostream>

using namespace std;


long long dp[10][1001];
long long sol;

int main() {

	int N;

	cin >> N;

	dp[0][1] = 1;


	// 길이기 1인 자릿수들이다 
	// i가 커질수록 오름차순을 이르는 수의 개수는 1식 증가한다.
	for (int i = 1; i <= 9; i++) {
		dp[i][1] = dp[i - 1][1] + 1;
	}

	

	// i = 수의 길이
	// j = 해당 수까지만 사용가능
	for (int i = 2; i <= N; i++) {
		dp[0][i] = 1;
		// j 수를 넘지 않는 수로 만드는 수의길이
		for (int j = 1; j <= 9; j++) {
			for (int k = i; k >= 1; k--) {
				dp[j][i] += dp[j - 1][k];
			}
			dp[j][i] += 1;
			// 중도 과정부터 나머지 계산해주는 이유는 나중에 long long의 범위를 넘어갈 수 있기 때문이다.
			dp[j][i] %= 10007;		
		}
	}


	cout << dp[9][N];


	return 0;
}