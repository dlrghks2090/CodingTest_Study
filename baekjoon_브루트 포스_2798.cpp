// 백준 부루트 포스_2798번
// 블랙잭 문제
// 숫자가 적혀있는 N장의 카드가 주어질 때, 3장을 뽑아 M에 최대한 가까운 카드의 3장의 합을 출력하라.
// N과 M, N개의 숫자카드가 입력으로 주어진다.

#include <iostream>

using namespace std;

int main() {

	int N, M;
	int* arr;
	int max = 0;


	cin >> N >> M;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {

				if (arr[i] + arr[j] + arr[k] > M)
					continue;
				if (arr[i] + arr[j] + arr[k] > max) {
					max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	
	cout << max;

	delete[] arr;
	return 0;
}