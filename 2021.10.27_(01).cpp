// ���� 1212��_�����3_8���� 2���� ����
// ���� : 8������ �־����� ��, 2������ ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

// Ǯ��>  - ���� ���̰� ũ�Ƿ� string���� �Է¹޾� ó���Ѵ�.
//		  - �ڸ������� 3�ڸ��� 2������ Ǯ���.  ex) 7(8) -> 111(2)

#include<iostream>

using namespace std;

int main() {

	string eight;
	int tmp = 0;

	cin >> eight;

	for (int i = 0; i < eight.size(); i++) {
		tmp = eight[i] - '0';

		// 8������ ���ڸ��� ���
		if (i == 0) {
			// 2������ 3�ڸ��� ù°�ڸ��� 0�̸� 0�� ��µ��� �ʵ��� ���ǹ��� �������.
			if (tmp / 4 != 0) {
				cout << tmp / 4;
				tmp %= 4;
				cout << tmp / 2;
				tmp %= 2;
			}
			else if (tmp / 2 != 0) {
				cout << tmp / 2;
				tmp %= 2;
			}

		}
		else {
			cout << tmp / 4;
			tmp %= 4;
			cout << tmp / 2;
			tmp %= 2;
		}
		cout << tmp;
		tmp = 0;
	}


	return 0;
}