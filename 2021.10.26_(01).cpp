// ���� 1373��_�����2_2������ 8���� ����
// 2������ 8������ �ٲٴ� ������ ����Ͽ� Ǯ����.
// �Ҽ��� ���� 3�ڸ��� ��� ����ϴ°��� ����Ʈ

#include<iostream>
#include<string>

using namespace std;

int main() {

	string two;
	int len;
	int i = 0;

	cin >> two;

	len = two.size();

	//cout << len << '\n';
	if (len % 3 == 1) {
		cout << two[0];
		i = 1;
	}
	else if (len % 3 == 2) {
		cout << ((two[0] - '0') * 2) + (two[1] - '0');
		i = 2;
	}

	for (; i < len; i += 3) {
		cout << ((two[i] - '0') * 4) + ((two[i + 1] - '0') * 2) + (two[i + 2] - '0');
	}
	cout << '\n';


	return 0;
}