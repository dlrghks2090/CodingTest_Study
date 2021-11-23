// 백준_DP_2011번_실버1_암호코드 문제
// DP의 bottom - top 방식을 사용해 풀이해냈다.
// 점화식은 해당 원소의 수가 0인지 아닌지에 따라 나뉜다.
// 점화식	:	 arr[i] == 0일때,						dp[i] = dp[i - 2] % 1000000
//				 arr[i - 1] == 0일때,					dp[i] = dp[i - 1] % 1000000;
//				 arr[i - 1] * 10 + arr[i] <= 26일때,	dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000
//											아날때,		dp[i] = (dp[i - 1]) % 1000000

// 이 문제는 예외처리를 빠짐없이 하는게 어려웠다.
// 처음에 0으로 시작할때, 중간에 0이 나왔는데 이전수가 1이나 2가 아닐때, 입력값이 0~9 사이값이 아닌 다른 값일때 가 예외경우였다.

#include<iostream>
#include<string>

using namespace std;


int dp[5001];
int arr[5001];
string s;

int main() {

	int size = 0;
	int tmp = 0;

	cin >> s;

	size = s.size();

	for (int i = 0; i < size; i++) {

		if (s[0] - '0' == 0) {
			cout << 0;
			return 0;
		}
		if (0 <= (s[i] - '0') && (s[i] - '0') <= 9) {
			arr[i + 1] = s[i] - '0';
			if (arr[i + 1] == 0) {
				if (arr[i] != 2 && arr[i] !=1) {
					cout << 0;
					return 0;
				}
			}
		}
		else {
			cout << 0;
			return 0;
		}
	}

	dp[0] = 1;
	dp[1] = 1;
	

	for (int i = 2; i <= size; i++) {

		if (arr[i] == 0) {
			dp[i] = dp[i - 2]%1000000;
			
		}
		else if (arr[i - 1] == 0) {
			dp[i] = dp[i - 1]%1000000;
			
		}
		else {
			tmp = arr[i - 1] * 10 + arr[i];
			if (tmp <= 26) {

				dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
			}
			else {
				dp[i] = (dp[i - 1]) % 1000000;
			}
		}
	}

	cout << dp[size];


	  



	return 0;
}