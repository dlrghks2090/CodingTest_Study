// 백준_브루트포스_15650번_실버3_N과 M(2) 문제
// 순서에 상관 없이 선택하는 경우를 고려하는게 핵심인 문제였다.
// 풀이법	:	1. 고른 수 다음부터 고를 수 있도록 함수를 세팅
//				2. N의 수까지 M개의 수열을 모았을 경우만 출력

#include<iostream>

using namespace std;

int N, M;
int sol[8];

void sequence(int count, int idx, int num) {

	// M개의 수를 모았을 때만 출력
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// 백트래킹을 재귀적으로 표현했다.
	else {
		for (int j = num + 1; j <= N; j++) {
			sol[idx] = j;
			sequence(count + 1, idx + 1, j);
		}
	}
}

int main(){

	cin >> N >> M;


	for (int i = 1; i <= N - M+1; i++) {
		sol[0] = i;
		sequence(1, 1, i);	// 모은 수열의 원소 수, 저장할 수열의 index, 마지막으로 선택한 숫자 
	}


	return 0;
}