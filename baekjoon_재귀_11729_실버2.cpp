// 백준 재귀_11729번_<실버2>
// 하노이 탑 이동 순서 문제

#include<iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int by, int to) {

	if (n == 1)
		cout << from << " " << to << '\n';
	else {
		hanoi(n - 1, from, to, by);
		cout << from << " " << to <<'\n';
		hanoi(n - 1, by, from, to);
	}
	


}

int main() {

	// c++의 입출력 속도를 높이기 위한 코드
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cout << (int)pow(2, N) - 1 << '\n';  // endl 대신 '\n'을 사용하여 시간을 줄였다.
	hanoi(N, 1, 2, 3);



	return 0;
}