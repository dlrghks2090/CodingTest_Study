// ����_DP_1309��_�ǹ�1_������ ����
// DP�� bottom - top ������� Ǯ��´�.
// n=1�ϰ����� 4�ϰ������� ���� ���غ� �� ��ȭ���� ���س´�.
// ��ȭ��	:	dp[i] = dp[i-1]*2 + dp[i-2]


#include<iostream>

using namespace std;

int dp[100001];

int main() {

	int N;

	cin >> N;

	dp[0] = 1;
	dp[1] = 3;
	for (int i = 2; i <= N; i++) {
		dp[i] = (dp[i - 1] * 2 + dp[i - 2])%9901;
	}

	cout << dp[N];


	return 0;
}