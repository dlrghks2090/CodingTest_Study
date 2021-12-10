// 백준_BackTracking(DFS)_6603번_실버2
// 전형적인 백트래킹 문제로 DFS(재귀)를 사용하여 풀어냈다.

#include<iostream>

using namespace std;

int arr[14];
int sol[6];
int k;

// 재귀를 이용한 DFS 함수 구현
void dfs(int n, int count) {

	// count 가 6이 되면 고른 수를 출력
	if (count == 6) {
		for (int i = 0; i < 6; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = n; i < k; i++) {
		sol[count] = arr[i];
		dfs(i + 1, count + 1);		//재귀형식으로 dfs구현
	}


}

int main() {


	while (1) {

		cin >> k;
		// k의 입력값이 0이 나오면 프로그램 종료
		if (k == 0) {
			break;
		}
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		// 집합의 첫번째 원소부터 시작, count 0부터시작(6이되면 출력)
		dfs(0,0);
		cout << '\n';
	}




	return 0;
}