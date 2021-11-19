// ����_DP_11054��_���3_���� �� ������� �κ� ���� ����
// DP�� bottom - top ������� Ǯ���ߴ�.
// ��� ���̵��� �׷��� �׵����� dp ������ �����Ų ��������.
// �� ������ �ٽ��� �ΰ��� dp���� ���ؼ� Ǯ���ϴ� �κ��̴�.
// ��ȭ��	:	arr[i] > arr[j]�϶�, dp[i][0] = max(dp[i][0], dp[j][0] + 1)
//				arr[i] > arr[j]�϶�, dp[i][1] = max(dp[i][1], dp[j][1] + 1)

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][2] = { 1, };
int arr[1001];

int main() {

	int N;
	int sol = 0;

	cin >> N;

	fill(&dp[0][0], &dp[1000][2], 1);

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	// �ش簪�� ���ʿ��� �ش簪���� ���� �����ϴ� ������ ���� ���Ѵ�.
	for (int i = 2; i <= N; i++) {

		for (int j = 1; j <= i - 1; j++) {
			if (arr[i] > arr[j]) {
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			}
		}	
	}
	// �ش簪�� �����ʿ��� �ش簪���� ���� �����ϴ� ������ ���� ���Ѵ�.
	for (int i = N-1; i >= 1; i--) {

		for (int j = N; j >= i+1; j--) {
			if (arr[i] > arr[j]) {
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
			}
		}
	}

	for (int i = 1; i <= N; i++) {

		// �ΰ��� dp�� ��� �ڱ��ڽ��� ���Խ������Ƿ� 1�� ���ش�.
		sol = max(sol, dp[i][0] + dp[i][1] - 1);
	}

	/*
	for (int i = 1; i <= N; i++) {
		cout << "dp[" << i << "] = " << dp[i][0]+dp[i][1]-1 << '\n';
	}
	*/
	

	cout << sol;


	return 0;
}