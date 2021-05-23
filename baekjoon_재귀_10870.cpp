// 백준 재귀_10870번
// 피보나치 수 5 문제
// 피보나치는 0과 1로 시작한다. 0번째 피보나치 수는 0, 1번째 피보나치 수는 1이다.
// 2번째부터는 바로 앞 두 피보나치 수의 합이 된다.
// n이 입력으로 주어질때, n번째 피보나치 수를 구하는 프로그램을 작성해라.

#include <iostream>

using namespace std;

int main() {

	int n;
	int* arr;

	cin >> n;
	arr = new int[n+1];

	if (n == 0) {
		cout << 0;
	}
	else if (n == 1) {
		cout << 1;
	}
	else {
		for (int i = 0; i <= n; i++) {
			if (i == 0)
				arr[i] = 0;
			else if (i == 1)
				arr[i] = 1;
			else {
				arr[i] = arr[i - 1] + arr[i - 2];
			}
		}
		cout << arr[n];

	}
	
	delete[] arr;
	return 0;
}