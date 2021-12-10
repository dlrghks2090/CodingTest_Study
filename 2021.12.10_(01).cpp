// 백준_2711번_브론즈2_오타맨 고창영 문제

#include<iostream>
#include<string>

using namespace std;


int main() {
	
	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int idx = 0;
		string s;
		cin >> idx >> s;

		s.erase(idx - 1,1);		// s.erase(시작 인덱스, 삭제할 개수);
		cout << s << '\n';
	}


	return 0;
}