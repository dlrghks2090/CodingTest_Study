// 백준_브루트포스_6064번_실버1_카잉 달력 문제
// 1. 최대 확인 범위를 최소공배수를 사용해 구한다.
// 2. 달력을 x가 되는 날만 확인하도록 for문을 M만큼 추가하면서 확인해 시간을 줄인다.

// 시간 초과로 계속 틀렸던 문제였다. for문을 성형해 맞출 수 있었다.

#include<iostream>

using namespace std;


// 유클리드 호제법을 사용해 최대 공약수를 구하는 함수
int gcd(int a, int b) {

	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

// 최소공배수 구하는 함수
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int M, N, x, y;
		int ox = 0;
		int a = 0;
		int b = 0;
		cin >> M >> N >> x >> y;

		// 달력을 x가 되는 날만 확인하도록 for문을 M만큼 추가하면서 확인해 시간을 줄였다.
		for (int j = x; j <= lcm(M, N); j += M) {

			b = (j % N == 0) ? N : j % N;
			
			if (b == y) {
				cout << j << '\n';
				++ox;
				break;
			}

			++a;
			++b;
		}
		// 위의 해당범위에서 찾지 못했다면 -1 출력
		if (ox == 0) {
			cout << -1 << '\n';
		}
	}



	return 0;
}