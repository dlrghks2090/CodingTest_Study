// ����_1935��_�ǹ�3_���� ǥ���2 ����
// 
// stack�� ����Ͽ� ���� ǥ������ ����ϴ� ��������.
// 
// ��������)
//		 �Ҽ����Ʒ� ���ڸ����� ǥ���Ҷ� cout<< fixed;  cout.precision(2); �� ���������Ѵ�.
//		 ���ǽ������� �Ҽ��� ���� �ڸ��� 1���� ������ ���� fixed ���� cout.precision(3) �� ����Ͽ� ��� ������ Ʋ�Ⱦ���.

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {

	int N;
	string s;
	char ch[26] = { 'A', 'B', 'C', 'D', 'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	stack<double> st;
	cin >> N;
	int* arr = new int[N];
	int pos = 0;

	cin >> s;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		while (s.find(ch[i], pos) != std::string::npos) {
			pos = s.find(ch[i], pos);
			s[pos] = arr[i] + '0';
			pos = pos + 1;

		}
	}


	for (int i = 0; i < s.size(); i++) {
		double a, b;
		double tmp;

		if (s[i] == '+') {
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();
			tmp = a + b;

			st.push(tmp);

		}
		else if (s[i] == '-') {
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();
			tmp = a - b;

			st.push(tmp);
		}
		else if (s[i] == '*') {
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();
			tmp = a * b;

			st.push(tmp);
		}
		else if (s[i] == '/') {
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();
			tmp = a / b;

			st.push(tmp);
		}
		else {
			st.push(s[i]-'0');
		}


	}

	// �Ҽ��� �Ʒ� 2�ڸ� ������ ǥ���ϱ� ���� �ڵ��̴�.
	cout << fixed;
	cout.precision(2);
	cout <<showpoint<< st.top();

	delete[] arr;
	return 0;
}