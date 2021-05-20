// 백준 기초수학2_1085번
// 직사각형에서 탈출 문제
// (x,y) : 현재위치
// (w,h) : 직사각형의 오른쪽 위 꼭짓점 
// (0,0) : 직사각형의 왼쪽 아래 꼭짓점
// 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하라.

#include <iostream>

using namespace std;


int main() {

	int x, y, w, h;
	int min = 0;

	cin >> x >> y >> w >> h;

	min = w - x;

	if (min > x)
		min = x;
	if (min > y)
		min = y;
	if (min > h - y)
		min = h - y;

	cout << min;


	return 0;
}