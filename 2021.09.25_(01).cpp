// 백준_정수론 및 조합론_11050번_브론즈1_이항 계수1 문제
// 이항꼐수 ( (N K) 세로로)  = N! / (K!(N-K)!)
#include<iostream>

using namespace std;


int factorial(int num) {

	int tmp = 1;


	for (int i = 1; i <= num; i++) {
		tmp *= i;
	}

	return tmp;

}

int main() {

	int N, K;
	int sol;

	cin >> N >> K;

	sol = factorial(N) / (factorial(K) * factorial(N - K));

	cout << sol;


	return 0;
}