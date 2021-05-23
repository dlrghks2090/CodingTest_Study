// 백준 재귀_10872번
// 팩토리얼 문제
// 0보다 크거나 같은 정수 N이 입력으로 주어질때, N!을 출력하는 프로그램을 작성해라.

#include <iostream>

using namespace std;


int factorial(int n) {

	int sol = 1;
	for (int i = 1; i <= n; i++) {
		sol *= i;
	}

	return sol;
}


int main() {

	int N;

	cin >> N;

	cout << factorial(N);

	return 0;
}