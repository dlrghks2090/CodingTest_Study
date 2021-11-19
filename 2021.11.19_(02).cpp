// 백준_DP_11055번_실버2_가장 큰 증가 부분 수열 문제
// DP의 bottom - top 방식을 사용해 풀어냈다.
// 이전에 백준_DP_11053번_가장 긴 증가하는 부분수열문제와 비슷한 풀이방식으로 풀어냈댜.
// 점화식 :  arr[i] > arr[j]일때,  dp[i] = max(dp[i], dp[j]);
//			이를 j<i 인 루프동안 해준 후 dp[i] += arr[i] 를해준다.
// 이 문제의 핵심은 해당 수에 맞는 직전 최대 증가수열 합을 찾은 후 해당수를 dp값에 추가시켜주는 것이다.

#include<iostream>
#include<algorithm>

using namespace std;

long long dp[1001];
int arr[1001];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	// 첫 번째 dp값은 직접 지정해준다.
	dp[1] = arr[1];
	// 수열의 길이가 1인 경우를 대비해 sol 값을 dp[1]값으로 초기화
	sol = dp[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			// 해당 수보다 작은 수까지의 dp 값만을 검색
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j]);
			}
		}
		// for문이 끝난 후 해당 수의 값을 dp값에 추가시킨다.
		dp[i] += arr[i];

		sol = max(sol, dp[i]);
	}

	cout << sol;



	return 0;
}