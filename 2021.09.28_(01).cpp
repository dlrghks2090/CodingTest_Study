// 백준_1009번_브론즈3_분산처리 문제
// 문제풀이 핵심 : 몇 제곱이던 결국 마지막 1의자리 숫자만 알면 되므로 10의 나머지 계산을 이용해 문제를 풀었다.

#include<iostream>


using namespace std;

int main() {

	int T; 
	int a, b;
	unsigned long long int tmp;

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> a >> b;

		if (b == 1) {
			tmp = a;
		}
		else {
			tmp = a;
			for (int i = 1; i < b; i++) {

				tmp = (tmp * a) % 10;
			}
		}

		// 10번째 컴퓨터에서 하는경우
		if (tmp % 10 == 0) {
			cout << 10 << '\n';
		}
		// 나머지 컴퓨터들에서 하는 경우
		else {
			cout << tmp % 10 << '\n';
		}

	}

	return 0;
}