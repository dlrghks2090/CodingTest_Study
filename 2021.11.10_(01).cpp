// ����_DP_14002��_���4_���� �� �����ϴ� �κ� ���� 4 ����
// ���� �� �����ϴ� �κ� ���� �������� ������ ����� �߰��� �����̴�.
// �ٽ��� dp���� ���� ��Ŀ������ �̿��Ͽ� �������� ���� �� ������ �Ǵ� ���Ұ��� ��󳻴� ���̴�.

#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int dp[1001];

int main() {

	int N;
	int* arr;
	int sol = 1;
	stack<int> st;

	cin >> N;
	arr = new int[N + 1];

	fill(dp, dp + 1001, 1);

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = 2; i <= N; i++) {

		
		
		// dp ���ϱ�
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		
		// ������ i���� �����Ͽ� ���� �� ������ ���̸� ���Ѵ�.
		sol = max(sol, dp[i]);

	}

	cout << sol << '\n';


	// dp[N] ���� ���� dp�� ���鼭 dp �� ���� �ϳ��� Ȯ���Ѵ�.
	// sol���� ���� �ϳ��� ���簡�鼭 sol���� ���� dp�� �ε����� �ִ� ���Ұ�(arr��)�� ���ÿ� ����
	// �� ����� ������ ������ dp�� ���� ���ϴ� ��Ŀ������ �ش簪������ ������ �����̱� �����̴�.
	for (int i = N; i >= 1; i--) {
		if (dp[i] == sol) {
			st.push(arr[i]);
			--sol;
		}
		if (sol == 0) {
			break;
		}
	}

	// ���ÿ� ����� ������ ���ʷ� ����Ѵ�.
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}




	return 0;
}