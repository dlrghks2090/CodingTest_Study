// 백준_DP_2156번_실버1_포도주 시식 문제
// DP의 bottom - top 방식으로 풀어냈다.
// 점화식	:	dp[i][0] = max(dp[i - 1][1], dp[i-1][0])
//				dp[i][1] = max(dp[i - 2][0] + arr[i - 1] + arr[i], dp[i - 2][1] + arr[i])
//	i = 포주도의 위치를 나타낸다.
//	dp[i][0] = 해당 위치의 포도주를 먹지 않을때 지금까지 먹은 포도주의 최대 양
//	dp[1][1] = 해당 위치의 포도주를 먹었을때 지금까지 먹은 포도주의 최대 양 

#include<iostream>
#include<algorithm>

using namespace std;


long long dp[10001][2];
int arr[10001];

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1][0] = 0;
	dp[1][1] = arr[1];
	//dp[2][0] = arr[1];
	//dp[2][1] = arr[1] + arr[2];
	
	for (int i = 2; i <= n; i++) {
		dp[i][0] = max(dp[i - 1][1], dp[i-1][0]);
		dp[i][1] = max(dp[i - 2][0] + arr[i - 1] + arr[i], dp[i - 2][1] + arr[i]);
	}

	cout << max(dp[n][0], dp[n][1]);
	

	return 0;
}