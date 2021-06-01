// 백준 1010번
// 다리 놓기 문제
#include <iostream>

using namespace std;

// mCn : m개중에 순서를 생각하지않고 n개를 선택하는 가짓수
int main() {

	int T;
	int* M;
	int* N;
	double sol = 1;
	int n_ = 1;

	cin >> T;

	M = new int[T];
	N = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> N[i] >> M[i];
	}

	for (int i = 0; i < T; i++) {
		for (int j = M[i]; j > M[i] - N[i]; j--) {
			sol = (double)sol * j / n_;
			++n_;
		}
		cout << (int)sol << endl;
		n_ = 1;
		sol = 1;
	}

	return 0;
}