// 백준 1212번_브론즈3_8진수 2진수 문제
// 문제 : 8진수가 주어졌을 때, 2진수로 변환하는 프로그램을 작성하시오.

// 풀이>  - 수의 길이가 크므로 string으로 입력받아 처리한다.
//		  - 자릿수마다 3자리의 2진수로 풀어낸다.  ex) 7(8) -> 111(2)

#include<iostream>

using namespace std;

int main() {

	string eight;
	int tmp = 0;

	cin >> eight;

	for (int i = 0; i < eight.size(); i++) {
		tmp = eight[i] - '0';

		// 8진수가 한자리일 경우
		if (i == 0) {
			// 2진수의 3자리중 첫째자리가 0이면 0이 출력되지 않도록 조건문을 만들었다.
			if (tmp / 4 != 0) {
				cout << tmp / 4;
				tmp %= 4;
				cout << tmp / 2;
				tmp %= 2;
			}
			else if (tmp / 2 != 0) {
				cout << tmp / 2;
				tmp %= 2;
			}

		}
		else {
			cout << tmp / 4;
			tmp %= 4;
			cout << tmp / 2;
			tmp %= 2;
		}
		cout << tmp;
		tmp = 0;
	}


	return 0;
}