// 백준_스택_1406번_실버3_에디터 문제
// 문자열사이의 문자 추가 삭제 등의 계산을 해야하는 문제에서 stack을 사용하면 획기적으로 시간을 줄일 수 있다.

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {

	string s;
	stack<char> st;
	stack<char> st2;
	int num;
	char com;
	char ele;

	cin >> s;

	for (int i = 0; i < s.size(); i++){

		st.push(s[i]);

	}
	
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> com;

		if (com == 'L') {
			if (!st.empty()) {
				st2.push(st.top());
				st.pop();
			}
		}
		else if (com == 'D') {
			if (!st2.empty()) {
				st.push(st2.top());
				st2.pop();
			}
		}
		else if (com == 'B') {
			if (!st.empty()) {
				st.pop();
			}
		}
		else if (com == 'P') {
			cin >> ele;
			st.push(ele);
		}
	}

	while (!st.empty()) {
		st2.push(st.top());
		st.pop();
	}

	while (!st2.empty()) {
		cout << st2.top();
		st2.pop();
	}


	return 0;
}