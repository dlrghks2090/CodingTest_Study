// 백준_DP_16194번_실버1_카드 구매하기2 문제
// 카드 구매하기 와 같은 방식이지만 최소값을 구하는 문제였다.
// top - bottom 방식으로 풀이했고 특이점은 memset을 사용해 dp배열을 10000으로 초기화해준 점이다.

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[10001];

int main() {

	int N;
	int* arr;

	cin >> N;
	arr = new int[N + 1];

	arr[0] = 10000;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}	

	memset(dp, 10000, sizeof(dp));		// for문보다 더 빠르다.

	dp[0] = 0;
	dp[1] = arr[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i - j] + arr[j], dp[i]);
		}
	}

	cout << dp[N];



	delete[] arr;

	return 0;
}