// ����_2711��_�����2_��Ÿ�� ��â�� ����

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

		s.erase(idx - 1,1);		// s.erase(���� �ε���, ������ ����);
		cout << s << '\n';
	}


	return 0;
}