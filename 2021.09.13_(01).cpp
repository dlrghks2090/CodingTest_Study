#include<iostream>
#include<algorithm>
#include<vector>

// sort STL���� ������ ������ ���� (�񱳸� ���� �Լ��� ����) ��Ű�� ����� ���� ��� �� �־���.
// Ŭ������ ����ϸ� �߻�ȭ�ϴµ� �� �� �ͼ����� �� �־���.

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

		// �̷������� ������ ���Ҹ� �߰��� �� �ִٴ� ���� ���
		v.push_back(point(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].x << " " << v[i].y << '\n';
	}

	return 0;
}