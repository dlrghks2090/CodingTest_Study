// ����_DP_10844��_�ǹ�1_���� ��� �� ����
// DP�� bottom - top ����� ����� Ǯ����.
// i = 2 ���� ��ȭ�� :  dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1]   ��, j�� 0or9�϶��� �ϳ��� ���

#include<iostream>
#include<algorithm>

using namespace std;

long long dp[101][10];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	fill(dp[1]+1, dp[1]+10, 1);

	//cout << dp[1][0] << '\n';
	

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {

			if (j != 0 && j != 9) {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			}
			else {
				if (j == 0) {
					dp[i][j] = dp[i - 1][j + 1];
				}
				else if (j == 9) {
					dp[i][j] = dp[i - 1][j - 1];
				}
			}


			// ������ �� �ִ� ���� ������ ����� �ʵ��� ��� dp[i]�� �׵��� 1000000000 ���� Ȯ���� Ŭ�� ����������� ���ش�.
			if (dp[i][j] > 2000000000) {
				dp[i][j] %= 1000000000;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sol += dp[N][i];
	}

	//cout << dp[N][0] << '\n' << sol << '\n';
	
	// ��� ���� ������ �� 1000000000 ���� Ŭ �� �����Ƿ� �ѹ� �� ������ ����� ���ش�.
	cout << sol % 1000000000;



	return 0;
}