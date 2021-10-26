// 백준 1373번_브론즈2_2진수와 8진수 문제
// 2진수를 8진수로 바꾸는 공식을 사용하여 풀었다.
// 소수점 기준 3자리씩 끊어서 계산하는것이 포인트

#include<iostream>
#include<string>

using namespace std;

int main() {

	string two;
	int len;
	int i = 0;

	cin >> two;

	len = two.size();

	//cout << len << '\n';
	if (len % 3 == 1) {
		cout << two[0];
		i = 1;
	}
	else if (len % 3 == 2) {
		cout << ((two[0] - '0') * 2) + (two[1] - '0');
		i = 2;
	}

	for (; i < len; i += 3) {
		cout << ((two[i] - '0') * 4) + ((two[i + 1] - '0') * 2) + (two[i + 2] - '0');
	}
	cout << '\n';


	return 0;
}