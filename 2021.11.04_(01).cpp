// 백준 11726번_DP_실버3_2*n 타일링 문제
// bottom-top 방식을 적용해 점화식을 찾아내어 문제를 풀었다.
// 실행결과 계속 실패가 나왔는데 arr에 저장되는값이 갈수록 너무 커져서 발생한 문제였다.
// 해결방안 : arr에 저장되는수를 10007로 미리 나머지 계산을 해주어 입력했다.

#include<iostream>

using namespace std;

int arr[1001];

int main() {

	int n;

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2])%10007;
	}

	cout << arr[n]%10007;

	return 0;
}