// 백준 문자열_1152번
// 단어의 개수 문제
// 영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다.
// 단, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에 공백이 있을 수 있다.
// 단어의 수를 출력하는 프로그램을 작성하라.

#include <iostream>
#include <string>

using namespace std;


int main() {

	string str;
	int num = 0;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str.size() == 1 && str[i] == ' ') {
			cout << 0;
			return 0;
		}
		if (i == 0 && str[i] == ' ') {
				continue;
		}
		if (i == (str.size() - 1) && str[i] == ' ') {
				continue;
		}
		if (str[i] == ' ')
			++num;
	}
	++num;
	cout << num;

	return 0;
}