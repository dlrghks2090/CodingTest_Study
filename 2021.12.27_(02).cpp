// 백준_브루트포스_15665번_실버2_N과 M(11) 문제
#include<iostream>
#include<algorithm>

using namespace std;

int N, M;
int arr[8];
int sol[8];
int tmp;

void sequence(int count) {
	// count 가 M보다 커지면 sol 출력
	if (count > M) {
		for (int i = 1; i <= M; i++) {
			cout << sol[i] << " ";
		}
		cout << '\n';
	}
	else {
		tmp = 0;
		// arr의 원소를 오름차순으로 정렬해 두었기에 tmp를 사용해 sol의 각 인덱스에 중복된 수를 허용하지 않게 했다.
		// i= 1부터 시작하도록해 같은 수를 여러 번 고를 수 있도록 했다.
		for (int i = 1; i <= N; i++) {

			if (arr[i] != tmp) {
				sol[count] = arr[i];
				sequence(count + 1);
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
	// 오름차순으로 arr 정렬
	sort(arr + 1, arr + 1 + N);

	sequence(1);

	return 0;
}