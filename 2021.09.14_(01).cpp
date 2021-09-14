#include<iostream>
#include<algorithm>

// ��ǥ�� ��Ÿ�� ��� -> ����ü�� �̿��Ͽ� ǡǥ�� ǥ���Ͽ���.
//			=>  ����ü �迭 arr[100001]�� ����� ����ü ���� ���� x, y �� �Է��������ν� ��ǥ���� �Է¹޾Ҵ�.
// soft STL�� ����Ͽ� ���� -> �񱳱����� ����� ���� compare �Լ� ����

using namespace std;

struct Point {
	int x;
	int y;
};


bool compare(Point &arr1, Point &arr2) { // 2���� �迭�� ������, ��, ���� ũ��
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