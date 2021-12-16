// ����_DP_2579��_�ǹ�3_��� ������ ����
// DP�� bottom - top ����� ����� Ǯ���� �´�.
// ������ ������ ������ ��ƾ� �Ѵٴ°� �ٽ�!
// ��ȭ��	:	dp[n] = max ( dp[n-3] + arr[n] + arr[n-1],  dp[n-2] + arr[n] )
// 
// �׻� ��ȭ���� ������ ���°��� ���� �ʴ�
// �ݺ����� ������ �ʿ��ϴ�.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[301];
int arr[301];

int main() {

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	
	for (int i = 3; i <= N; i++) {
		dp[i] = max(dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i]);
	}

	cout << dp[N];

	return 0;
}