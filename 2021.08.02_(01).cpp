// 제곱근까지의 약수까지만 확인하여 걸리는 시간을 줄였다.
// 출력하는 수들도 따로 저장하지 않고 바로바로 출력하는것으로 시간을 줄였다.

#include<iostream>

using namespace std;

int main() {

	int M, N;
	int ox = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++) {

		if (i == 1) {
			continue;
		}
		else if (i == 2) {
			cout << i << '\n';
		}
		else if (i == 3) {
			cout << i << '\n';
		}
		else if (i == 4) {
			continue;
		}
		else if (i >= 5) {
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					++ox;
					break;
				}
			}
			if (ox == 0) {
				cout << i << '\n';
			}
			ox = 0;
		}
		
	}


	return 0;
}