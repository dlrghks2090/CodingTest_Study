// 백준_DP_1149번_실버1_RGB거리 문제
// DP의 bottom - top 방식을 사용해 풀어냈다.
// DP에 익숙해졌다 싶었는데 이번 문제를 접근하기가 어려웠다. 아직 더욱 많은 연습이 필요한것 같다.
// 점화식 	:	dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + arr[i][1];
//				dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + arr[i][2];
//				dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][3];
// 이처럼 각 색을 선택했을때마다 dp값을 구해줘야하는 문제였다.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][4];
int main() {

	int N;
	int arr[1001][4] = { 0, };	// 모든 갑승ㄹ 0으로 초기화
	int sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
	}

	// 처음색은 하나뿐이므로 직접 설정
	dp[1][1] = arr[1][1];
	dp[1][2] = arr[1][2];
	dp[1][3] = arr[1][3];


	// 점화식을 적용하여 dp값을 채운다.
	for (int i = 2; i <= N; i++) {
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + arr[i][1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + arr[i][2];
		dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][3];
	}

	// N개의 집 색을 선택하는데 드는 최소 비용
	sol = min({ dp[N][1], dp[N][2], dp[N][3] });

	cout << sol;


	return 0;
}