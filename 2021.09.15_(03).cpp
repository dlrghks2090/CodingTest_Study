#include<iostream>

// 최소공배수 = 두 자연수의 곱 / 최대공약수

// BUT, 코딩으로 최소공배수를 구현하기 위해 유클리드 호제법을 사용하였다.

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
			// _x 가 두 수의 최대공약수이다.

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
			// _y 가 두 수의 최대공약수이다.

			x = x / _y;
			y = y / _y;


			cout << x * y * _y << '\n';
		}

		tmp = 10;
		
		
	}

	return 0;
}