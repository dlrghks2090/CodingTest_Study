// ���� ����_1427��
// ��Ʈ�λ��̵� ����
// �־��� ���� ������������ �����ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>
#include <string>
using namespace std;


int main() {

	string str;
	int tmp = 0;
	cin >> str;

	for (int i = 0; i < str.size()-1; i++) {
		for (int j = 0; j < str.size() - i - 1; j++) {
			if ((int)str[j] - 48 < (int)str[j + 1]-48) {
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}

	}
	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
	}

	return 0;
}