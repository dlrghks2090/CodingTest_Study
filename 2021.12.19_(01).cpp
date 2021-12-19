// 백준_브루트포스_9663번_골드5_N-Queen 문제
// 재귀를 활용한 백트래킹으로 풀어냈다.

#include<iostream>

using namespace std;

int col[15];	// 열을 나타낸 배열, 각 원소에는 퀸이 있는 행의 위치가 저장된다.
int sol = 0;	// 퀸을 놓는 총 방법의 수를 저장
int N;			// 체스판의 크기


// 퀸을 놓을 수 있는 자리인지를 체크해주는 함수
bool check(int idx) {

	for (int i = 0; i < idx; i++) {
		// 같은 행에 있거나 대각선 위치에 있으면 탈락
		if (col[i] == col[idx] || abs(col[idx] - col[i]) == idx - i) {
			return false;
		}
	}
	return true;

}


void nqueen(int n) {
	 
	// N열까지 퀸을 놓았을때 방법의 수 1 증가
	if (n == N) {
		++sol;
	}
	else {
		// 재귀를 통해 비교적 쉽게 백트래킹을 구현하였다.
		for (int i = 0; i < N; i++) {
			col[n] = i;

			// 이부분이 백트래킹의 핵심
			if (check(n)) {
				nqueen(n + 1);
			}

		}
	}
}

int main() {

	cin >> N;

	// 0번째 열부터 시작한다.
	nqueen(0);
	cout << sol;

	return 0;
}