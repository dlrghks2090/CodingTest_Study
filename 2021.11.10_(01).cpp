// 백준_DP_14002번_골드4_가장 긴 증가하는 부분 수열 4 문제
// 가장 긴 증가하는 부분 수열 문제에서 수열의 출력을 추가한 문제이다.
// 핵심은 dp값을 구한 메커니즘을 이용하여 역순으로 가장 긴 수열이 되는 원소값을 골라내는 것이다.

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

		
		
		// dp 구하기
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		
		// 마지막 i까지 실행하여 가장 긴 수열의 길이를 구한다.
		sol = max(sol, dp[i]);

	}

	cout << sol << '\n';


	// dp[N] 부터 낮은 dp로 가면서 dp 의 값을 하나씩 확인한다.
	// sol값의 값을 하나씩 낮춰가면서 sol값과 같은 dp의 인덱스에 있는 원소값(arr값)을 스택에 저장
	// 이 방식이 가능한 이유는 dp의 값을 정하는 메커니즘이 해당값까지의 수열의 길이이기 때문이다.
	for (int i = N; i >= 1; i--) {
		if (dp[i] == sol) {
			st.push(arr[i]);
			--sol;
		}
		if (sol == 0) {
			break;
		}
	}

	// 스택에 저장된 수열을 차례로 출력한다.
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}




	return 0;
}