// 백준_DP_10844번_실버1_쉬운 계단 수 문제
// DP의 bottom - top 방식을 사용해 풀었다.
// i = 2 부터 점화식 :  dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1]   단, j가 0or9일때는 하나만 사용

#include<iostream>
#include<algorithm>

using namespace std;

long long dp[101][10];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	fill(dp[1]+1, dp[1]+10, 1);

	//cout << dp[1][0] << '\n';
	

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {

			if (j != 0 && j != 9) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			}
			else {
				if (j == 0) {
					dp[i][j] = dp[i - 1][j + 1];
				}
				else if (j == 9) {
					dp[i][j] = dp[i - 1][j - 1];
				}
			}


			// 저장할 수 있는 수의 범위를 벗어나지 않도록 모든 dp[i]의 항들이 1000000000 보다 확실히 클때 나머지계산을 해준다.
			if (dp[i][j] > 2000000000) {
				dp[i][j] %= 1000000000;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sol += dp[N][i];
	}

	//cout << dp[N][0] << '\n' << sol << '\n';
	
	// 모든 항을 합했을 때 1000000000 보다 클 수 있으므로 한번 더 나머지 계산을 해준다.
	cout << sol % 1000000000;



	return 0;
}