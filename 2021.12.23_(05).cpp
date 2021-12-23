// 백준_브루트포스_15656번_실버3_N과 M(7) 문제

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[7];
int sol[7];

void sequence(int count) {

	// 0에서 시작한 count값이 M과 같아지면 sol 배열 출력
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// 중복 순열이 가능하도록 for문 i = 0 부터 구성했다.
	else {
		for (int i = 0; i < N; i++) {
			sol[count] = arr[i];
			sequence(count + 1);
		}
	}


}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 오름차순으로 배열 정렬
	sort(arr, arr + N);

	sequence(0);


	return 0;
}