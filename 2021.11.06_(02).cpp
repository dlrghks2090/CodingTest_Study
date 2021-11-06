// ����_DP_16194��_�ǹ�1_ī�� �����ϱ�2 ����
// ī�� �����ϱ� �� ���� ��������� �ּҰ��� ���ϴ� ��������.
// top - bottom ������� Ǯ���߰� Ư������ memset�� ����� dp�迭�� 10000���� �ʱ�ȭ���� ���̴�.

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[10001];

int main() {

	int N;
	int* arr;

	cin >> N;
	arr = new int[N + 1];

	arr[0] = 10000;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}	

	memset(dp, 10000, sizeof(dp));		// for������ �� ������.

	dp[0] = 0;
	dp[1] = arr[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i - j] + arr[j], dp[i]);
		}
	}

	cout << dp[N];



	delete[] arr;

	return 0;
}