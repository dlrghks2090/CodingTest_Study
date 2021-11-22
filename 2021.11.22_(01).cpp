#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// [][0]�϶�, �����Ѽ��� ���� ��� �ִ밪,   [][1]�϶�, �ϳ������� �ִ밪
long long dp[100001][3];		
long long arr[100001];


int main() {

	int n;
	long long sol = 0;

	cin >> n;



	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	// �ּ� �ϳ��� �� �̻��� �̾ƾ� �ϹǷ� ù��° dp ���� ù���� ������ �������ش�.
	dp[1][0] = arr[1];
	dp[1][1] = arr[1];
	sol = arr[1];

	for (int i = 2; i <= n; i++) {

		// dp[i][0] �� ���� ū ������ �������������� �ִ� ������
		dp[i][0] = max(dp[i - 1][0] + arr[i], arr[i]);
		// dp[i][1] �� ���� �� �ϳ��� ������ �ִ� ������
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + arr[i]);

		// ������ ���� ������ ����ؼ� 3���� ���� �ִ밪�� ������ѵӴϴ�.
		sol = max(sol, max(dp[i][0],dp[i][1]));
		
	}

	cout << sol;



	return 0;
}