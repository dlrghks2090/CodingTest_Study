// 백준_DP_9095번_실버3_1,2,3 더하기 문제
// 규칙을 찾는게 핵심인 DP문제이다.
// 해당 문제도 역시 bottom - top 방식으로 풀어냈다.
// 점화식을 찾아내는 문제였다. 
// arr[n] = arr[n-1]+arr[n-2]+arr[n-3]


// 4를 예로들면,
// 3의 경우에 1을 플러스한 경우, 2의 경우에 2를 플러스한경우, 1의 경우에 3을 플러스한 경우들이다.

#include<iostream>

using namespace std;

int arr[11];

int main() {

	int T; 
	int n;

	cin >> T;

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	//arr[4] = 7;
	//arr[5] = 13;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << arr[n] << '\n';
	}


	return 0;
}