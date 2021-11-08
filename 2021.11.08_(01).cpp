// ����_DP_2193��_�ǹ�3_��ģ�� ����
// DP�� bottom - top ����� ����Ͽ� dp[3]���� ���ʴ�� dp�� ���� ä��������.
// dp �� �ڷ����� int�� �ϸ� 90���� ������ ���� ũ�Ⱑ int�� ������ �Ѿ� Ŀ���Ƿ� long long ���� ����

#include<iostream>

using namespace std;

long long dp[91];

int main() {

	int N;

	cin >> N;

	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= N; i++) {

		// dp[i-1]�� �� ������ ���� 0�϶��� ����, dp[i-2]�� �� ������ ���� 1�϶��� ����
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[N];


	return 0;
}