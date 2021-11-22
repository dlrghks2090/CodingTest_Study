#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// [][0]일때, 제거한수가 없는 경우 최대값,   [][1]일때, 하나제거한 최대값
long long dp[100001][3];		
long long arr[100001];


int main() {

	int n;
	long long sol = 0;

	cin >> n;



	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// 최소 하나의 수 이상을 뽑아야 하므로 첫번째 dp 값은 첫항의 값으로 지정해준다.
	dp[1][0] = arr[1];
	dp[1][1] = arr[1];
	sol = arr[1];

	for (int i = 2; i <= n; i++) {

		// dp[i][0] 의 값은 큰 음수가 나오기전까지의 최대 연속합
		dp[i][0] = max(dp[i - 1][0] + arr[i], arr[i]);
		// dp[i][1] 의 값은 수 하나를 제외한 최대 연속합
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + arr[i]);

		// 음수가 없을 경우까지 고려해서 3개를 비교해 최대값을 저장시켜둡니다.
		sol = max(sol, max(dp[i][0],dp[i][1]));
		
	}

	cout << sol;



	return 0;
}