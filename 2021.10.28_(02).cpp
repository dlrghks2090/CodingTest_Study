// 백준 1075번_브론즈2_나누기 문제
// 가능한 작은 뒤 두자리를 만들어야 하므로 처음부터 00으로 맞춰놓고 시작한다.
// 00으로 맞춘 N을 F로 나눈 나머지에서 F가 되기까지 모자란 값이 뒤 두자리 수가 된다.
// but 나머지가 0일때는 00이 뒤 두자리 수가 된다.

#include<iostream>

using namespace std;


int main() {

	long long N;
	int F;
	int tmp;
	int last;
	int sol;

	cin >> N;
	cin >> F;



	tmp = N % 100;

	N = N - tmp;

	last = N % F;

	if (last == 0) {
		sol = 0;
	}
	else {
		sol = F - last;
	}

	if (sol < 10) {
		cout << 0 << sol;
	}
	else {
		cout << sol;
	}


	return 0;
}