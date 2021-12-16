// 백준_DP_2579번_실버3_계단 오르기 문제
// DP의 bottom - top 방식을 사용해 풀이해 냈다.
// 마지막 지점은 무조건 밟아야 한다는게 핵심!
// 점화식	:	dp[n] = max ( dp[n-3] + arr[n] + arr[n-1],  dp[n-2] + arr[n] )
// 
// 항상 점화식을 도출해 내는것이 쉽지 않다
// 반복적인 연습이 필요하다.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[301];
int arr[301];

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	
	for (int i = 3; i <= N; i++) {
		dp[i] = max(dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i]);
	}

	cout << dp[N];

	return 0;
}