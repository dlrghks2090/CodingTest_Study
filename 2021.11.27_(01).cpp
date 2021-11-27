// 백준_이분탐색_10815번_실버4_숫자 카드 문제
// sort한 후 이분탐색을 사용해 빅오를 낮춰 제한시간안에 출력이 나와야하는 문제였다.

#include<iostream>
#include<algorithm>

using namespace std;

int arr1[500001];
int arr2[500001];
int sol[500001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr1[i];
	}
	
	cin >> M;

	for (int i = 1; i <= M; i++) {
		cin >> arr2[i];
	}

	sort(arr1 + 1, arr1 + N + 1);

	for (int i = 1; i <= M; i++) {
		int left = 1;
		int right = N;
		int mid = (left + right) / 2;
		while (left <= right) {
			if (arr2[i] == arr1[mid]) {
				sol[i] = 1;
				break;
			}

			if (arr2[i] < arr1[mid]) {
				right = mid-1;
			}
			else {
				left = mid+1;
			}
			mid = (left + right) / 2;
		}
	}

	for (int i = 1; i <= M; i++) {
		cout << sol[i] << " ";
	}




	return 0;
}