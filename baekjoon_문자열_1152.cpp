// ���� ���ڿ�_1152��
// �ܾ��� ���� ����
// ���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����.
// ��, ������ �����ؼ� ������ ���� ����. ���� ���ڿ��� �հ� �ڿ� ������ ���� �� �ִ�.
// �ܾ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.

#include <iostream>
#include <string>

using namespace std;


int main() {

	string str;
	int num = 0;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str.size() == 1 && str[i] == ' ') {
			cout << 0;
			return 0;
		}
		if (i == 0 && str[i] == ' ') {
				continue;
		}
		if (i == (str.size() - 1) && str[i] == ' ') {
				continue;
		}
		if (str[i] == ' ')
			++num;
	}
	++num;
	cout << num;

	return 0;
}