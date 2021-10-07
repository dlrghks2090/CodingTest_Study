// 백준_1935번_실버3_후위 표기식2 문제
// 
// stack을 사용하여 후위 표위식을 계산하는 문제였다.
// 
// 주의할점)
//		 소수점아래 두자리까지 표현할때 cout<< fixed;  cout.precision(2); 를 사용해줘야한다.
//		 무의식적으로 소수점 위의 자리를 1개로 생각해 위의 fixed 없이 cout.precision(3) 을 사용하여 계속 문제를 틀렸었다.

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

	// 소수점 아래 2자리 수까지 표현하기 위한 코드이다.
	cout << fixed;
	cout.precision(2);
	cout <<showpoint<< st.top();

	delete[] arr;
	return 0;
}