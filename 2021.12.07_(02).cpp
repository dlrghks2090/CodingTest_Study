// 백준_2490번_브론즈3_윷놀이 문제

#include<iostream>

using namespace std;

int main() {

	int arr[4] = { 0, };
	int sol = 0;

	for (int i = 0; i < 3; i++) {
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		sol = arr[0] + arr[1] + arr[2] + arr[3];

		switch (sol) {
		case 0:
			cout << "D" << '\n';
			break;
		case 1:
			cout << "C" << '\n';
			break;
		case 2:
			cout << "B" << '\n';
			break;
		case 3:
			cout << "A" << '\n';
			break;
		case 4:
			cout << "E" << '\n';
			break;
		}
	}




	return 0;
}