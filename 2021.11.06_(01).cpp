// 백준_DP_11052번_실버1_카드 구매하기
// bottom - top 방식으로 푸는 dp 문제였다.
// 점화식 : dp[i] = dp[i-j] + arr[j];    ( 1 <= j <= i )
// 위의 식 계산중에 최댓값을 해당 dp항에 저장

#include<iostream>
#include<algorithm>

using namespace std;

int dp[10001];

int main() {

	int N;
	int* arr;

	cin >> N;
	arr = new int[N+1];

	arr[0] = 0;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i - j] + arr[j], dp[i]);
		}
	}

	cout << dp[N];



	delete[] arr;
	return 0;
}