// 백준 기초수학1_2869번
// 달팽이는 올라가고 싶다 문제
// V : 막대의 높이
// A : 낮동안 달팽이가 막대를 올라가는 높이
// B : 밤에 달팽이가 미끄러져 막대를 내려오는 높이
// 단, 막대기 정상에 올라가면 미끄러지지 않는다.
// 달팽이가 막대의 정상을 올라가려면 몇 일이 걸리는지 구하라.

#include <iostream>


using namespace std;


int main() {

	int A, B, V;
	int day = 0;
	int total = 0;

	cin >> A >> B >> V;

	while (1) {
		if (total + 100 * A - 99 * B < V) {
			day += 99;
			total = total + 99 * A - 99 * B;
		}
		++day;
		total =total + A;
		if (total >= V) {
			cout << day;
			break;
		}
		total = total - B;

	}


	return 0;
}