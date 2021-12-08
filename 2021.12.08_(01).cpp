// ����_5430��_���5_AC����
// 
// vector �� deque�� �������� Ȯ���� �ν��� �� Ǯ�̿� ������ ��������.
// vector�� ��� �����̳��� �� ��ġ������ ���� ���Ű� �����ϰ� ���̳� �߰������� ������ ������ ��������.
// �׷��� deque�� ��� �����̳��� �հ� ������ ����,���Ű� �����ϰ� �߰����� ������ ��������.
// ������ Ȯ���� ������ �� �� ������ deque�� Ǯ���س´�.

// vector�� ��� �����̳� ���ʿ� ���Խ� ������ ������ ����ŭ ��ĭ�� �̵��ϴ� ����� �ʿ��ϴ�

#include<iostream>
#include<string>
//#include<vector>
#include<deque>

using namespace std;

int main() {

	int T;
	string s;
	int num;
	string ele;
	

	cin >> T;

	for (int i = 0; i < T; i++) {
		//vector<int> v;
		deque<int> dq;
		int reverse = 0;
		string tmp = "";

		cin >> s;		// ��ɾ� �Է�
		cin >> num;		// ������ ���� �Է�
		cin >> ele;		// ���Ұ� ����ִ� �迭 �Է�

		
		for (int j = 1; j <= ele.size(); j++) {

			if (ele[j] == ',') {
				//v.push_back(stoi(tmp));
				dq.push_back(stoi(tmp));
				tmp.clear();
			}
			else if (ele[j] == ']') {
				if (j == 1) {
					break;
				}
				else {
					//v.push_back(stoi(tmp));
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
			else {
				tmp.push_back(ele[j]);
			}
		}
		tmp.clear();
		

		/*
		for (int j = 0; j < num; j++) {
			cout << v[j] << " ";
		}
		cout << '\n';
		*/


		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'R') {
				++reverse;
			}
			else if (s[j] == 'D') {
				if (num > 0) {
					if (reverse % 2 == 0) {
						//v.erase(v.begin());
						dq.pop_front();
					}
					else {
						//v.pop_back();
						dq.pop_back();
					}
					--num;
				}
				else {
					--num;
				}
			}
		}

		if (num >= 0) {
			cout << "[";
			if (reverse % 2 == 0) {
				for (int j = 0; j < num; j++) {
					if (j == num - 1) {
						//cout << v[j];
						cout << dq[j];
					}
					else {
						//cout << v[j] << ",";
						cout << dq[j] << ",";
					}
				}
				cout << "]" << '\n';
			}
			else {
				for (int j = num-1; j >= 0; j--) {
					if (j == 0) {
						//cout << v[j];
						cout << dq[j];
					}
					else {
						//cout << v[j] << ",";
						cout << dq[j] << ",";
					}
				}
				cout << "]" << '\n';

			}
		}
		else {
			cout << "error" << '\n';
		}

	}




	return 0;
}