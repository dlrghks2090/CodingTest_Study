// 백준 2163번_브론즈3_초콜릿 자르기 문제
// 점화식으로 초콜릿을 자르는 식을 찾아내서 풀었다.

#include<iostream>

using namespace std;


int main() {

	int N, M;
	int sol;


	cin >> N >> M;

	// 점화식을 이용해 찾은 공식
	sol = (N - 1) + N * (M - 1);

	cout << sol;



	return 0;
}