// 백준_DP_2747번_브론즈3_피보나치 수 문제
// 
// 기본적인 피보나치구하는 식을 사용하면 같은 항을 구하기위해 여러번 계산하게 된다.
// 이러한 의미없는 계산을 하지 않도록 DP의 bottom - top 방식을 사용해 시간복잡도를 대폭 줄였다.

#include<iostream>

using namespace std;


int arr[46];



int fibo(int n) {

	if (n <= 1) {
		arr[n] = n;
		return arr[n];
	}

	if (arr[n] != 0) {
		return arr[n];
	}
	arr[n] = fibo(n - 1) + fibo(n - 2);
	return arr[n];
}


int main() {

	int n;

	cin >> n;

	cout << fibo(n);



	return 0;
}