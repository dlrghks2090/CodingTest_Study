// ����_����_1406��_�ǹ�3_������ ����
// ���ڿ������� ���� �߰� ���� ���� ����� �ؾ��ϴ� �������� stack�� ����ϸ� ȹ�������� �ð��� ���� �� �ִ�.

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