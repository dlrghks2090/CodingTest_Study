// ����_DP_1699��_�ǹ�3_�������� �� ����
// DP�� bottom - top ����� ����� ������ Ǯ��´�.
// ��ȭ�� : j*j == i �϶�, dp[i] = min(dp[i], 1)
//			j*j < i �϶�, dp[i] = min(1+dp[i-j*j],dp[i])

#include<iostream>
#include<algorithm>

using namespace std;

int dp[100001];
int main() {

	int N;

	cin >> N;

	// dp�� ��� ���� 10000���� �ʱ�ȭ
	fill(dp, dp + 100001, 10000);

	for (int i = 1; i <= N; i++) {

		for (int j = 1; j*j <= i; j++) {
			// �������� �ش簪�� ��ġ�Ҷ�, �� �ش簪�� dp�� = 1
			if (j * j == i) {
				dp[i] = min(dp[i], 1);
				
			}
			// ���� ū ������ = 1 , �ش簪���� ���� ū �������� �� ���������� dp�� = dp[i -j*j]    �� ���� ���� ���� ���� �������� �ش簪�� dp�� ����
			else {
				dp[i] = min(1 + dp[i - j * j], dp[i]);
			}
		}
	

	}

	cout << dp[N];

	return 0;
}