// ����_DP_11057��_�ǹ�1_������ ��
// DP�� bottom - top ����� ����Ͽ� Ǯ��´�.
// ��ȭ�� : dp[j][i] = dp[j-1][i] + ......+ dp[j-1][1];
// �ƽ������� for���� 3�� ��ø�ؼ� ����� ���̴�. �� �� ���� �ڵ�� © �� �ִ��� �����غ����� �� ����.

#include<iostream>

using namespace std;


long long dp[10][1001];
long long sol;

int main() {

	int N;

	cin >> N;

	dp[0][1] = 1;


	// ���̱� 1�� �ڸ������̴� 
	// i�� Ŀ������ ���������� �̸��� ���� ������ 1�� �����Ѵ�.
	for (int i = 1; i <= 9; i++) {
		dp[i][1] = dp[i - 1][1] + 1;
	}

	

	// i = ���� ����
	// j = �ش� �������� ��밡��
	for (int i = 2; i <= N; i++) {
		dp[0][i] = 1;
		// j ���� ���� �ʴ� ���� ����� ���Ǳ���
		for (int j = 1; j <= 9; j++) {
			for (int k = i; k >= 1; k--) {
				dp[j][i] += dp[j - 1][k];
			}
			dp[j][i] += 1;
			// �ߵ� �������� ������ ������ִ� ������ ���߿� long long�� ������ �Ѿ �� �ֱ� �����̴�.
			dp[j][i] %= 10007;		
		}
	}


	cout << dp[9][N];


	return 0;
}