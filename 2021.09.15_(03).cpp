#include<iostream>

// �ּҰ���� = �� �ڿ����� �� / �ִ�����

// BUT, �ڵ����� �ּҰ������ �����ϱ� ���� ��Ŭ���� ȣ������ ����Ͽ���.

using namespace std;

int main() {

	int T;
	int x;
	int y;
	int _x;
	int _y;
	int tmp =10;

	cin >> T;


	for (int i = 0; i < T; i++) {
		cin >> x >> y;

		_x = x;
		_y = y;
		
		if (_x >= _y) {
			while (tmp != 0) {
				tmp = _x % _y;
				_x = _y;
				_y = tmp;
			}
			// _x �� �� ���� �ִ������̴�.

			x = x / _x;
			y = y / _x;


			cout << x*y*_x << '\n';
		}
		else{
			while (tmp != 0) {
				tmp = _y % _x;
				_y = _x;
				_x = tmp;
			}
			// _y �� �� ���� �ִ������̴�.

			x = x / _y;
			y = y / _y;


			cout << x * y * _y << '\n';
		}

		tmp = 10;
		
		
	}

	return 0;
}