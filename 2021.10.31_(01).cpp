// ����_ 11005��_�����1_���� ��ȯ2 ����


#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {

	string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	stack<char> st;

	int N, B;
	
	cin >> N >> B;

	while (N / B != 0) {

		if (N % B < 10) {
			st.push(N % B + '0');
			N = N / B;
		}
		else {
			st.push(arr[N % B - 10]);
			N = N / B;
		}
	}

	if (N % B < 10) {
		st.push(N % B + '0');
		N = N / B;
	}
	else {
		st.push(arr[N % B - 10]);
		N = N / B;
	}
	
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}


	return 0;
}