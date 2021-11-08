// ����_DP_15990��_�ǹ�2_1,2,3 ���ϱ� 5 ����
// DP�� bottom - top ������� ������ �ذ��ߴ�.
// �����ؼ� ���� ���� ���� ������ �������� ��ȭ�� : dp[i] = dp[i-1] + dp[i-2] + dp[i-3] �ε�
// �ش� ������ ���� ���� �������� ������ �ȵȴٴ� ������ �ִ�.
// ����, �������� 1�� ���°��, 2�� ���°��, 3�� ���°��� ������ ������ش�.
// ��ȭ�� : dp[i][1] = dp[i-1][2] + dp[i-1][3];
//			dp[i][2] = dp[i-2][1] + dp[i-2][3];
//			dp[i][3] = dp[i-3][1] + dp[i-3][2];
#include<iostream>

using namespace std;

long long dp[100001][4];

long long kk = 1000000009;



// dp[n][1] ���������ڰ� 1�϶� ���Ͽ� n�� ����� ������
int main() {

	int T;
	int n;

	cin >> T;


	// 1���� 3������ ���� �������ش�.
	dp[1][1] = 1;
	//dp[2][1] = dp[1][2] + dp[1][3];
	dp[2][2] = 1;

	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	// 4���ʹ� ��ȭ�� ���
	for (int i = 4; i <= 100000; i++) {
		// bottom - top ������� ���� dp�� ä��������.
		dp[i][1] = dp[i - 1][2] + dp[i - 1][3];
		dp[i][2] = dp[i - 2][1] + dp[i - 2][3];
		dp[i][3] = dp[i - 3][1] + dp[i - 3][2];


		// �� ������ ũ�Ⱑ ��� kk ���� ũ�ų� �������� �ѹ��� ������ ����� ���ش�.
		// long long �� ���� ������ �Ѿ�°��� ����
		if (dp[i][1] >= kk && dp[i][2] >= kk && dp[i][3] >= kk) {
			dp[i][1] %= kk;
			dp[i][2] %= kk;
			dp[i][3] %= kk;
		}
	}

	//cout << dp[100000][1] << " " << dp[100000][2] << '\n';
	for (int i = 0; i < T; i++) {
		cin >> n;
		// �� ���� ���� kk�� �ѱ� �� �����Ƿ� ���������� �ѹ� �� kk�� ����������� ���ش�.
		cout << (dp[n][1] + dp[n][2] + dp[n][3])%kk << '\n';
	}


	return 0;
}