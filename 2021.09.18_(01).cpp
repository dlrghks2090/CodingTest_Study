
// compare 함수와 sort함수의 사용법에 대해 더 자세히 공부할 수 있는 문제였다.
// sort함수로 길이가 같은 문자열의 사전순서를 쉽게 풀 수 있다는 사실을 알았다.


#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;



bool compare(string a, string b) {

	// sort함수에서 알파벳순서 단어 비교가 가능하다.
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.size() < b.size();
	
}

int main() {

	int N;
	string str;
	vector<string> s;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		
		// find(first 부터, last 전 까지, 찾는 원소)
		// 위의 find함수에서 찾는 원소가 있을때 그것을 가리키는 반복자를 리턴
		// 만약 일치하는 원소가 없다면 last를 리턴한다.
		// 참고, string의 find함수와 다르다.
		if (find(s.begin(), s.end(), str) == s.end()) {
			s.push_back(str);
		}
	}

	sort(s.begin(), s.end(), compare );

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << '\n';
	}
	return 0;
}