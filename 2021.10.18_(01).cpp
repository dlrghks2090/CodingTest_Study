// 백준_11655번_브론즈1_ROT13 문제

// 문자를 아스키코드를 기준으로 계산하여 풀어낸 문제이다.
// 아스키 코드의 개념을 알아야 비교적 슆게 풀어낼 수 있는 문제라고 생각한다.

#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			if (str[i] <= 'M') {
				str[i] = str[i] + 13;
			}
			else {
				str[i] = 'a' + 13 - ('z' - str[i]) - 1;
			}
			
		}
		else if ('a' <= str[i] && str[i] <= 'z') {
			if (str[i] <= 'm') {
				str[i] = str[i] + 13;
			}
			else {
				str[i] = 'a' + 13 - ('z' - str[i]) - 1;
			}
		}

	}

	cout << str;
	

	return 0;
}