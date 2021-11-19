// ����_DP_11722��_�ǹ�2_���� �� �����ϴ� �κ� ���� ����
// DP�� bottom - top ����� ����� Ǯ��´�.
// ��ȭ�� : arr[j] > arr[i]�϶�,  dp[i] = max(dp[i], dp[j] + 1)
//         j<i�� �������� dp[i]�� �ִ밪�� ã�� 
//		   dp[N]���� �ش� dp�� ���� ������������ sol�� �ִ� ���̰��� ��� ������Ʈ ��Ų��.



#include<iostream>
#include<algorithm>

using namespace std;

long long dp[1001];
int arr[1001];

int main() {

	int N;
	long long sol = 0;

	cin >> N;

	fill(dp, dp + 1001, 1);

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sol = dp[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {

			if (arr[j] > arr[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		sol = max(sol, dp[i]);
	}

	cout << sol;

	return 0;
}