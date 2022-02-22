#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {


	while (1) {
		string str;
		stack<char> st;
		char c;
		int i = 0;
		int flag = 0;

		getline(cin, str);

		if (str[i] == '.')
			break;

		while (str[i] != '.') {
			c = str[i];
			if (str[i] == '(' || str[i] == '[') {
				st.push(c);
			}
			else if (str[i] == ')') {
				if (st.empty() || st.top() != '(') {
					cout << "no" << '\n';
					flag = 1;
					break;
				}
				else if (st.top() == '(') {
					st.pop();
				}
			}
			else if (str[i] == ']') {
				if (st.empty() || st.top() != '[') {
					cout << "no" << '\n';
					flag = 1;
					break;
				}
				else if (st.top() == '[') {
					st.pop();
				}
			}

			++i;

		}
		if (flag == 0 && st.empty())
			cout << "yes" << '\n';
		if (flag == 0 && !st.empty())
			cout << "no" << '\n';

	}
	
	return 0;
}