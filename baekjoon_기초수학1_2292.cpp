// 백준 기초수학1파트_2292번문제
// 벌집 문제
// 6각의 벌집방 중 중앙을 1번방으로 하여 이웃하는 방에 돌아가면서 1이 증가하는 번호를 갖는다.
// 숫자 N이 주어졌을 때, 벌집의 중앙 1번에서 N번 방까지 최소 개수의 방을 지나서 갈 때
// 몇개의 방을 지나는지 계산하는 프로그램을 만들어라.
// ex> 13까지는 3개, 58까지는 5개를 지난다.


//중앙에서 부터 거리 1이 증가할때 추가되는 방의 수 : 1 - 6 - 12 - 18.......
#include <iostream>

using namespace std;

int main() {
	int N;
	int num_of_room = 1;  // 1번 방부터 시작
	int sol = 1;  // 첫 번째 방도 지난 방으로 센다.

	cin >> N;

	if (N == 1) {
		cout << sol;
		return 0;
	}

	do {
		num_of_room += 6 * sol;
		++sol;

	} while (num_of_room < N);

	cout << sol;


	return 0;
}