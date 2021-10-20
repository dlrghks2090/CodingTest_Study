// 백준_11656번_실버4_접미사 배열문제
// 사전순으로 문자열을 정렬하는것이 핵심 -> algorithm의 sort를 사용해 해결했다.(sort에서 사전순 제공)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string str;

	cin >> str;
	string* s = new string[str.size()];

	for (int i = 0; i < str.size(); i++) {
		s[i] = str.substr(i);
	}

	sort(s, s + str.size());

	for (int i = 0; i < str.size(); i++) {
		cout << s[i] << '\n';
	}
	


	delete[] s;
	return 0;
}