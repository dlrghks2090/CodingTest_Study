// 백준_브루트포스_15649번_실버3_N과 M(1) 문제
// 중복없는 백트래킹 방식으로 풀어냈다.

#include<iostream>
#include<vector>

using namespace std;

int arr[9];
int N, M;
int sol[9];
int count = 0;


// 백트래킹으로 수열을 만드는 함수
void sequence(int c) {

	// M개의 수열을 만들면 출력
	if (c == M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	
	// 숫자의 범위 1~N 까지 시행
	for (int j = 1; j <= N; j++) {
		int ox = 0;	
		
		// j가 sol에 저장된 숫자들중 하나인지 판별
		for (int jj = 1; jj <= c; jj++) {
			if (sol[jj] == j) {
				++ox;
			}
		}
		// 선택하지 않은 숫자이면 선택 후 다음 수를 찾는 sequence 시행
		if (ox == 0) {
			sol[c + 1] = j;
			sequence(c + 1);
		}
		
	}


}

int main() {

	cin >> N >> M;


	sequence(0);



	return 0;
}