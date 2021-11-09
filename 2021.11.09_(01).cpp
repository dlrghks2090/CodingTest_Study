// 백준_DP_11053번_실버2_가장 긴 증가하는 부분 수열 문제
// DP의 bottom -top 방식으로 풀이했다.
// dp[i]의 값은 i번째 아래의 모든 원소들에 대해 즉,	arr[i] > arr[j] (j<i) 일때, dp[i] = max(dp[i] , dp[j]+1) 계산하여 구한다.
// 먼저 푼 방식들과는 다르게 이전의 원소들을 반복해서 확인해야 했다.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001];

int main() {

	int N;
	int* arr;
	int sol = 1;

	cin >> N;

	arr = new int[N+1];

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}


	//dp의 모든 원소값을 1로 초기화
	fill(dp, dp + 1001, 1);

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {

				dp[i] = max(dp[i], dp[j] + 1);

			}
		}
		sol = max(sol, dp[i]);

	} 

	//cout << dp[1] << " " << dp[2] << " " << dp[4] << " " << dp[6] << '\n';
	cout << sol;




	delete[] arr;

	return 0;
}