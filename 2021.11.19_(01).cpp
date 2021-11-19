// ����_DP_1932��_�ǹ�1_���� �ﰢ�� ����
// DP�� bottom - top ������� Ǯ��´�.
// ��ȭ�� : dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j])
// �������� : dp[1][0] �� dp[n][n+1]�� ����Ͽ� �� ���� dp�� ����Ҷ� ������ ������ �������.


#include<iostream>
#include<algorithm>

using namespace std;

long long dp[501][502];		// ���� �ִ� ���� 502�� �ϴ� ������ ������ ������ dp��꿡 ����ϱ� �����̴�.
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

	// dp�� ù �׸� �Է����ش�.
	dp[1][1] = arr[1][1];
	
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}

	//dp�� ������ ���� ������ ���Ͽ� ���� ū dp ���� ���
	for (int i = 1; i <= n; i++) {
		sol = max(sol, dp[n][i]);
	}


	cout << sol;


	return 0;
}