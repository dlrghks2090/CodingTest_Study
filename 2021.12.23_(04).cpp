// 백준_브루트포스_15655번_실버3_N과 M(6) 문제

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[8];
int sol[8];

void sequence(int count, int idx) {

	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		for (int i = idx; i < N; i++) {
			sol[count] = arr[i];
			sequence(count + 1, i + 1);
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