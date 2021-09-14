#include<iostream>
#include<algorithm>

using namespace std;

struct Point {
	int x;
	int y;
};

bool compare(Point& arr1, Point& arr2) {
	
	if (arr1.y < arr2.y) {
		return true;
	}
	else if (arr1.y == arr2.y) {
		if (arr1.x < arr2.x) {
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
	int x, y;
	Point arr[100001];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}

	sort(arr, arr + N, compare);

	for (int i = 0; i < N; i++) {
		cout << arr[i].x << " " << arr[i].y << '\n';
	}




	return 0;
}