// 백준_17087번_실버1_숨바꼭질6 문제
// 결국 핵심은 한 점에서 주어진 점까지의 거리들의 최대공배수를 구하는 문제였다.

#include<iostream>

using namespace std;

int gcd(int a, int b) {

	int mod = a % b;

	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}

	return b;
}

int main() {

	int N, S;
	int* sister;
	int sol = 0;
	int tmp, tmp1, tmp2;

	cin >> N >> S;

	sister = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> sister[i];
	}

	if (N == 1) {
		sol = S - sister[0];
		if (sol < 0) {
			sol *= -1;
		}
	}
	else {
		tmp1 = S - sister[0];
		tmp2 = S - sister[1];

		if (tmp1 < 0) {
			tmp1 *= -1;
		}
		if (tmp2 < 0) {
			tmp2 *= -1;
		}
		sol = gcd(tmp1, tmp2);
		if (N > 2) {
			for (int k = 2; k < N; k++) {
				tmp = S - sister[k];
				if (tmp < 0) {
					tmp *= -1;
				}
				sol = gcd(sol, tmp);
			}
		}

	}

	cout << sol;

	
	delete[] sister;

	return 0;
}