// ����_DP_11055��_�ǹ�2_���� ū ���� �κ� ���� ����
// DP�� bottom - top ����� ����� Ǯ��´�.
// ������ ����_DP_11053��_���� �� �����ϴ� �κм��������� ����� Ǯ�̹������ Ǯ��´�.
// ��ȭ�� :  arr[i] > arr[j]�϶�,  dp[i] = max(dp[i], dp[j]);
//			�̸� j<i �� �������� ���� �� dp[i] += arr[i] �����ش�.
// �� ������ �ٽ��� �ش� ���� �´� ���� �ִ� �������� ���� ã�� �� �ش���� dp���� �߰������ִ� ���̴�.

#include<iostream>
#include<algorithm>

using namespace std;

long long dp[1001];
int arr[1001];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	
	// ù ��° dp���� ���� �������ش�.
	dp[1] = arr[1];
	// ������ ���̰� 1�� ��츦 ����� sol ���� dp[1]������ �ʱ�ȭ
	sol = dp[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			// �ش� ������ ���� �������� dp ������ �˻�
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j]);
			}
		}
		// for���� ���� �� �ش� ���� ���� dp���� �߰���Ų��.
		dp[i] += arr[i];

		sol = max(sol, dp[i]);
	}

	cout << sol;



	return 0;
}