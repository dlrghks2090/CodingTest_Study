// ����_DP_11052��_�ǹ�1_ī�� �����ϱ�
// bottom - top ������� Ǫ�� dp ��������.
// ��ȭ�� : dp[i] = dp[i-j] + arr[j];    ( 1 <= j <= i )
// ���� �� ����߿� �ִ��� �ش� dp�׿� ����

#include<iostream>
#include<algorithm>

using namespace std;

int dp[10001];

int main() {

	int N;
	int* arr;

	cin >> N;
	arr = new int[N+1];

	arr[0] = 0;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i - j] + arr[j], dp[i]);
		}
	}

	cout << dp[N];



	delete[] arr;
	return 0;
}