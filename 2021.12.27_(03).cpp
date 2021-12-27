// 백준_브루트포스_15666번_실버2_N과 M(12) 문제

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int tmp;

void sequence(int count, int idx) {
	// count 가 M보다 커지면 sol 출력
	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		// idx부터 for문 시작
		for (int i = idx; i <= N; i++) {
			if (arr[i] != tmp) {
				sol[count] = arr[i];
				// 재귀 sequence의 idx 부분에 i 를 넣어줘 이전 sequence에 사용한 arr의 원소부터 시작할 수 있도록 만들었다.
				sequence(count + 1, i);
			}
			// sol의 각 원소에 중복을 방지하기 위한 장치이다.
			tmp = arr[i];
		}
	}
}

int main() {

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	// arr을 오름차순으로 정렬
	sort(arr + 1, arr + 1 + N);

	sequence(1, 1);


	return 0;
}