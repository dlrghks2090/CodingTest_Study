// 백준 정렬_1427번
// 소트인사이드 문제
// 주어진 수를 내림차순으로 정렬하는 프로그램을 작성하라.

#include <iostream>
#include <string>
using namespace std;


int main() {

	string str;
	int tmp = 0;
	cin >> str;

	for (int i = 0; i < str.size()-1; i++) {
		for (int j = 0; j < str.size() - i - 1; j++) {
			if ((int)str[j] - 48 < (int)str[j + 1]-48) {
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}

	}
	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
	}

	return 0;
}