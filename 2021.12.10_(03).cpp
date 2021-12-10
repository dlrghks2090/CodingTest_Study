// 백준_부르트 포스_2309번_브론즈2_일곱 난쟁이 문제
// DFS 재귀 방식으로 문제를 풀어냈습니다.

#include<iostream>
#include<algorithm>

using namespace std;

int arr[9];
int sol[7];

// DFS 함수
void dfs(int n, int count) {

	// 숫자 7개를 뽑았을 때
	if (count == 7) {
		int all = 0;
		for (int i = 0; i < 7; i++) {
			all += sol[i];
		}
		// 7개 수의 합이 100이면 
		if (all == 100) {
			// 오름차순으로 수 정렬
			sort(sol, sol + 7);
			for (int j = 0; j < 7; j++) {
				cout << sol[j] << '\n';
			}
			return;
		}
	}

	for (int k = n; k < 9; k++) {
		sol[count] = arr[k];
		dfs(k + 1, count + 1);
	}
}

int main() {
	
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	dfs(0, 0);

	return 0;
}