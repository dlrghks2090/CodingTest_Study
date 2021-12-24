// 백준_브루트포스_15657번_실버3_N과 M(8) 문제

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[8];
int sol[8];

void sequence(int count, int idx) {

	// count == M 이면 출력
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// 중복허용하면서 오름차순의 순열만 뽑도록 백트래킹을 만들었다.
	else {
		for (int i = idx; i < N; i++) {
			sol[count] = arr[i];
			sequence(count + 1, i);
		}
	}
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	sequence(0, 0);



	return 0;
}