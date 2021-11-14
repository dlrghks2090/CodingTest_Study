// ����_DP_1149��_�ǹ�1_RGB�Ÿ� ����
// DP�� bottom - top ����� ����� Ǯ��´�.
// DP�� �ͼ������� �;��µ� �̹� ������ �����ϱⰡ �������. ���� ���� ���� ������ �ʿ��Ѱ� ����.
// ��ȭ�� 	:	dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + arr[i][1];
//				dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + arr[i][2];
//				dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][3];
// ��ó�� �� ���� �������������� dp���� ��������ϴ� ��������.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][4];
int main() {

	int N;
	int arr[1001][4] = { 0, };	// ��� ���¤� 0���� �ʱ�ȭ
	int sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i][1] >> arr[i][2] >> arr[i][3];
	}

	// ó������ �ϳ����̹Ƿ� ���� ����
	dp[1][1] = arr[1][1];
	dp[1][2] = arr[1][2];
	dp[1][3] = arr[1][3];


	// ��ȭ���� �����Ͽ� dp���� ä���.
	for (int i = 2; i <= N; i++) {
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][3]) + arr[i][1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][3]) + arr[i][2];
		dp[i][3] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][3];
	}

	// N���� �� ���� �����ϴµ� ��� �ּ� ���
	sol = min({ dp[N][1], dp[N][2], dp[N][3] });

	cout << sol;


	return 0;
}