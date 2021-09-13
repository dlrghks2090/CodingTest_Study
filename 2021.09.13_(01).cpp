#include<iostream>
#include<algorithm>
#include<vector>

// sort STL으로 복잡한 정렬을 적용 (비교를 위한 함수를 적용) 시키는 방법에 대해 배울 수 있었다.
// 클래스를 사용하며 추상화하는데 좀 더 익숙해질 수 있었다.

using namespace std;


class point {

public:
	int x;
	int y;

	point(int _x, int _y) {
		x = _x;
		y = _y;
	}

};

bool compare(point& a, point& b) {

	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		if (a.y < b.y)
			return true;
		else
			return false;
	}
	else
		return false;

}



int main() {

	int N;
	vector<point> v;

	int x, y;

	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> x >> y;

		// 이런식으로 벡터의 원소를 추가할 수 있다는 것을 배움
		v.push_back(point(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].x << " " << v[i].y << '\n';
	}

	return 0;
}