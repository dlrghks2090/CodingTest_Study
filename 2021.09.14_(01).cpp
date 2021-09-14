#include<iostream>
#include<algorithm>

// 좌표를 나타낼 방법 -> 구조체를 이용하여 퐈표를 표현하였다.
//			=>  구조체 배열 arr[100001]을 만들고 구조체 안의 변수 x, y 를 입력해줌으로써 좌표들을 입력받았다.
// soft STL을 사용하여 정렬 -> 비교기준을 세우기 위한 compare 함수 생성

using namespace std;

struct Point {
	int x;
	int y;
};


bool compare(Point &arr1, Point &arr2) { // 2차원 배열의 포인터, 행, 열의 크기
	if (arr1.x < arr2.x) {
		return true;
	}
	else if (arr1.x == arr2.x) {
		if (arr1.y < arr2.y) {
			return true;
		}
		else {
			return false;
		}
	}
	else
		return false;

}


int main() {

	int N;

	Point arr[100001];
	int x, y;

	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}

	sort(arr, arr+N, compare);

	for (int i = 0; i < N; i++) {
		cout << arr[i].x << " " << arr[i].y << '\n';
	}

	


	return 0;
}