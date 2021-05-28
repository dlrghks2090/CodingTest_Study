// 백준 기초수학2_1002번
// 터렛 문제
// 두 좌표 와 각 좌표와의 목표지점과의 거리가 주어질 때, 가능한 목표지점의 위치 개수를 출력하라.
// (x1,y1)  (x2,y2)   :  두 좌표의 위치
// r1, r2  : 각 좌표에서 목표지점까지의 거리
// 단 가능한 목표지점의 개수가 무한대일 경우 -1을 출력한다.

#include <iostream>

using namespace std;

int main() {

	int T;
	int* x1;
	int* y1;
	int* r1;
	int* x2;
	int* y2;
	int* r2;
	int o1_o2_2 = 0;
	int r1_r2_2 = 0;
	int big_r = 0;
	int low_r = 0;

	cin >> T;

	x1 = new int[T];
	y1 = new int[T];
	r1 = new int[T];
	x2 = new int[T];
	y2 = new int[T];
	r2 = new int[T];

	for (int i = 0; i < T; i++) {
		cin >> x1[i] >> y1[i] >> r1[i] >> x2[i] >> y2[i] >> r2[i];
	}

	for (int i = 0; i < T; i++) {

		// r의 크기가 더 큰것과 작은것 구분
		if (r1[i] > r2[i]) {
			big_r = r1[i];
			low_r = r2[i];
		}
		else {
			big_r = r2[i];
			low_r = r1[i];
		}

		// 주어진 두점 사이의 거리의 제곱과 r들의 합의 제곱
		o1_o2_2 = (x1[i] - x2[i]) * (x1[i] - x2[i]) + (y1[i] - y2[i]) * (y1[i] - y2[i]);
		r1_r2_2 = (r1[i] + r2[i]) * (r1[i] + r2[i]);
		// 두 원이 서로소
		if (o1_o2_2 > r1_r2_2) {
			cout << 0 << endl;
		}
		// 두 원이 한점에서 외접
		else if (o1_o2_2 == r1_r2_2) {
			cout << 1 << endl;
		}
		// 두 원이 두 점에서 만날때
		else if (o1_o2_2 < r1_r2_2 && o1_o2_2 > (big_r - low_r) * (big_r - low_r)) {
			cout << 2 << endl;
		}
		// 두 원이 내접
		else if (o1_o2_2 == (big_r - low_r) * (big_r - low_r)) {
			// 두 원의 반지름이 같을 때
			if (r1[i] == r2[i]) {
				cout << -1 << endl;
			}
			// 두 원의 반지름이 다를 때
			else
				cout << 1 << endl;
		}
		// 한 원이 한원 내부에 있을 때
		else if (o1_o2_2 < (big_r - low_r) * (big_r - low_r)) {
			// 두 원의 반지름이 다를 때
			if (r1[i] != r2[i]) {
				cout << 0 << endl;
			}
			// 두 원의 반지름이 다를 때
			else
				cout << 2 << endl;
		}

	}


	return 0;
}