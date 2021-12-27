// 백준_브루트포스_15664번_실버2_N과 M(10)문제

#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[9];
int sol[9];
int tmp = 0;	// sol의 각 인덱스에 중복되는 수가 오지 않도록 하기 위한 변수

void sequence(int count, int idx) {
	// count 가 M보다 크게 되는 경우 출력해준다.
	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	// count가 채워지지 않았는데 idx가 N을 너머가면 함수 종료
	else if (idx > N) {
		return;
	}
	else {
		tmp = 0;
		// idx부터 for문을 시작하여 오름차순으로 출력되도록 구성
		for (int i = idx; i <= N; i++) {

			// tmp를 활용해 sol의 같은 인덱스에 중복된 수가 오지 않도록 했다.
			if (arr[i] != tmp) {
				sol[count] = arr[i];
				sequence(count + 1, i + 1);
			}
			tmp = arr[i];
		}
	}
}

int main() { 

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	sort(arr + 1, arr + 1 + N);

	sequence(1, 1);

	return 0;
}