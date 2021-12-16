// 백준_DP_1003번_실버3_피보나치 함수 문제
// DP의 top- bottom 방식을 사용해 문제를 풀어냈다.

#include<iostream>

using namespace std;

int zero[41];	// 해당 값을 구하기까지 호출한 0의 횟수
int one[41];	// 해당 값을 구하기까지 호출한 1의 횟수
int arr[41];	// 피보나치 해당 순번에 해당하는 값		이 배열을 사용함으로써 중복 걔산을 줄였다.



int fibo(int n){
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		// 이미 값이 존재하면 해당값 리턴 (이미 구한 값이다.)
		if (arr[n] > 0) {
			
			return arr[n];
		}

		arr[n] = fibo(n - 1) + fibo(n - 2);

		// arr의 밑에 위치하게  n ==2일때부터 zero와 one의 각 값을 arr처럼 구할 수 있도록 구성했다.
		zero[n] = zero[n - 1] + zero[n - 2];
		one[n] = one[n - 1] + one[n - 2];

		return arr[n];
	}
}

int main() {

	int T;
    int n;

	cin >> T;

	arr[0] = 0;
	arr[1] = 1;
	zero[0] = 1;
	one[1] = 1;
	
	for (int i = 0; i < T; i++) {
        cin >> n;
        fibo(n);
        cout << zero[n] << " " << one[n] << '\n';
	}



	return 0;
}