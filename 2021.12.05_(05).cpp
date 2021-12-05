// 백준_1026번_실버4_보물 문제
// sort를 사용해 풀이했습니다.

#include<iostream>
#include<algorithm>

using namespace std;

int A[51];
int B[51];

int main() {

	int N;
	int m = 200;
	int idx = 0;
	int sol = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++) {
		cin >> B[i];
	}

	sort(A + 1, A + 1 + N);

	for (int i = N; i >= 1; i--) {
		for (int j = 1; j <= N; j++) {
			if (m > B[j]) {
				m = B[j];
				idx = j;
			}
		}
		//cout << m << " * " << A[i] << '\n';
		sol += m * A[i];
		B[idx] = 200;
		m = 200;
		idx = 0;
	}
	cout << sol;

	return 0;
}