// 백준_DP_1932번_실버1_정수 삼각형 문제
// DP의 bottom - top 방식으로 풀어냈다.
// 점화식 : dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j])
// 주의할점 : dp[1][0] 과 dp[n][n+1]을 사용하여 양 끝의 dp를 계산할때 오류가 없도록 만들었다.


#include<iostream>
#include<algorithm>

using namespace std;

long long dp[501][502];		// 열의 최대 수를 502로 하는 이유는 오른쪽 끝수를 dp계산에 사용하기 위함이다.
int arr[501][501];

int main() {

	int n;
	long long sol = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	// dp의 첫 항만 입력해준다.
	dp[1][1] = arr[1][1];
	
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}

	//dp의 마지막 행의 수들을 비교하여 가장 큰 dp 값을 출력
	for (int i = 1; i <= n; i++) {
		sol = max(sol, dp[n][i]);
	}


	cout << sol;


	return 0;
}