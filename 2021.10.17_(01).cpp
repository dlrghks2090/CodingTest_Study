// 백준_10820번_브론즈2_문자열 분석 문제

// 엽력의 수가 따로 제공되지 않는 경우의 문제이다.
// while의 조건으로 getline함수를 사용해 풀어냈다.

#include<iostream>
#include<string>

using namespace std;

int main() {

	int N;
	int a, b, c, d;
	string str;


	while(getline(cin, str)) {
		a = 0; b = 0; c = 0; d = 0;
		

		for (int j = 0; j < str.size(); j++) {
			if (str[j] >= 'a' && str[j] <= 'z') {
				++a;
			}
			else if (str[j] >= 'A' && str[j] <= 'Z') {
				++b;
			}
			else if (str[j] - '0' >= 0 && str[j] - '0' <= 9) {
				++c;
			}
			else if (str[j] == ' ') {
				++d;
			}
		}

		cout << a << " " << b << " " << c << " " << d << '\n';

	}


	return 0;
}