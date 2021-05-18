// 백준 기초수학2_2581번
// 소수
// M : 10000이하의 자연수	
// N : 10000이하의 자연수
// M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들의 합과 최솟값을 출력하는 프로그램을 만들어라.
// M은 N보다 작거나 같다.


#include <iostream>

using namespace std;


int main() {

	int M, N;
	int count = 0;
	int min = 0;
	int sum_of_sosu = 0;
	int ox = 0;

	cin >> M >> N;
	min = N;

	for (int i = M; i <= N; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
			if (M>10)
				continue;
		}
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				ox++;
			
		}
		if (ox == 2) {
			count++;
			sum_of_sosu += i;
			if (min > i)
				min = i;
		}
		ox = 0;
	}

	if (count != 0) {
		cout << sum_of_sosu << endl << min;
	}
	else
		cout << -1;

	return 0;
}