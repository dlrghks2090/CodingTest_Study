// ����_DP_11053��_�ǹ�2_���� �� �����ϴ� �κ� ���� ����
// DP�� bottom -top ������� Ǯ���ߴ�.
// dp[i]�� ���� i��° �Ʒ��� ��� ���ҵ鿡 ���� ��,	arr[i] > arr[j] (j<i) �϶�, dp[i] = max(dp[i] , dp[j]+1) ����Ͽ� ���Ѵ�.
// ���� Ǭ ��ĵ���� �ٸ��� ������ ���ҵ��� �ݺ��ؼ� Ȯ���ؾ� �ߴ�.

#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001];

int main() {

	int N;
	int* arr;
	int sol = 1;

	cin >> N;

	arr = new int[N+1];

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}


	//dp�� ��� ���Ұ��� 1�� �ʱ�ȭ
	fill(dp, dp + 1001, 1);

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {

				dp[i] = max(dp[i], dp[j] + 1);

			}
		}
		sol = max(sol, dp[i]);

	} 

	//cout << dp[1] << " " << dp[2] << " " << dp[4] << " " << dp[6] << '\n';
	cout << sol;




	delete[] arr;

	return 0;
}