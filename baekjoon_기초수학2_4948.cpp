// 백준 기초수학2_4948번
// 베르트랑 공준 문제
// 베르트랑 공준은 "자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다"는 내용을 담고 있다.
// 자연수 n이 주어졌을 때 m보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성해라.

#include <iostream>
#include <vector>

using namespace std;

int sosu(int n) {

	int ox = 0;
	int count = 0;

	for (int i = n+1; i <= 2 * n; i++) {
		if (i > 10) {
			if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
				continue;
		}
		if (i > 100) {
			if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0 || i % 23 == 0)
				continue;
		}
		// 해당 숫자의 제곱근까지만 확인한다.
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				ox = 1;
				break;
			}
				
		

		}
		if (ox == 0)
			++count;
		ox = 0;
	}

	return count;
}


int main() {

	int n;
	vector<int> v;

	while (1) {
		cin >> n;
		if (n == 0)
			break;
		v.push_back(n);
		n = 0;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << sosu(v[i]) << endl;
	}


	return 0;
}