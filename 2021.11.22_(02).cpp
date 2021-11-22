// 백준_DP_2133번_실버1_타일 채우기 문제
// 점화식	:	dp[i] = dp[i-2]*3+dp[i-4]*2+....+dp[0]*2
// 도형과 관련된 dp문제풀이는 직접 그려보면서 풀어보는게 점화식 파악이 빠르다


#include<iostream>


int dp[31];

using namespace std;

int main() {

	int N;

	cin >> N;


	dp[0] = 1;
	for (int i = 2; i <= N; i = i + 2) {
		for (int j = i - 2; j >= 0; j = j - 2) {
			if (j == i - 2) {
				dp[i] += dp[j] * 3;
			}
			else {
				dp[i] += dp[j] * 2;
			}
		}
	}

	cout << dp[N];



	return 0;
}