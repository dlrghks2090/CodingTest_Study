// 백준_DP_11727번_실버3_2*n 타일링 2 문제
// 2*n타일링 문제와 전체적으로 풀이방법은 갖다
// But, arr[n] 을 구할때, arr[n-2] 부분이 arr[n-2]*2 로 바뀐다.
// 이유는 1*2 타일이 들어가는 모든자리에 2*2 타일이 들어갈 수 있기 때문에 이 경우만 채워주면 모든 경우를 셀 수 있다.

#include<iostream>

using namespace std;

int arr[1001];

int main() {

	int n;
	
	cin >> n;

	arr[1] = 1;
	arr[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]*2)%10007;
	}

	cout << arr[n];

	return 0;
}