// 백준_브루트포스_1748번_실버3_수 이어 쓰기1 문제
// N이 10의 거듭제곱수인 경우일때의 계산을 고려해 풀어야 했다. 

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {

	int N;
	string s;
	int size = 0;
	int sol = 0;
	int k = 1;

	cin >> N;
	s = to_string(N);

	size = s.size();

	//cout << "N = " << N << '\n';
	//cout << "size = " << size << '\n';
	//cout << "pow(10,size-1) = " << pow(10, size - 1) << '\n';


	// N이 10의 거듭제곱 수가 아니면 N에서 제일 가까운 (9.....)뺀 값을 더해준다.
	if ((N - (pow(10, size - 1) - 1)) > 1) {
		sol += (N - (pow(10, size - 1) - 1)) * (size);
	}
	// N 이 10의 거듭제곱 수이면 size 만큼 sol에 값을 추가해준다.
	else {
		sol += size;
	}

	// 1부터 N에서 제일 가까운 9.... 값까지 자릿수를 더해준다.
	for (int i = 1; pow(10, i) <= N; i++) {
		sol += (9 * pow(10, i-1)) * k;
		k = k +1 ;
	}
	cout << sol;



	return 0;
}