// ����_DP_1912��_�ǹ�2_������ ����
// DP�� bottom - top ������� Ǯ��´�.
// ��ȭ�� : dp[i] = max(dp[i - 1] + arr[i], arr[i])
// ���� DP������ �ͼ������� �ִ�.

#include<iostream>
#include<algorithm>

using namespace std;

long long arr[100001];

long long dp[100001];

int main() {

	int n;
	long long tmp = 0;
	long long sol = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// ���Ұ� 1���� ��츦 ����� sol���� arr[1]������ �ʱ�ȭ
	sol = arr[1];

	dp[1] = arr[1];

	// dp�� ������ �̿��� ���� ���Ѵ�.
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		sol = max(dp[i], sol);
	}
	

	cout << sol;



	return 0;
}