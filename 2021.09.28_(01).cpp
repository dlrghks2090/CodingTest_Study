// ����_1009��_�����3_�л�ó�� ����
// ����Ǯ�� �ٽ� : �� �����̴� �ᱹ ������ 1���ڸ� ���ڸ� �˸� �ǹǷ� 10�� ������ ����� �̿��� ������ Ǯ����.

#include<iostream>


using namespace std;

int main() {

	int T; 
	int a, b;
	unsigned long long int tmp;

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> a >> b;

		if (b == 1) {
			tmp = a;
		}
		else {
			tmp = a;
			for (int i = 1; i < b; i++) {

				tmp = (tmp * a) % 10;
			}
		}

		// 10��° ��ǻ�Ϳ��� �ϴ°��
		if (tmp % 10 == 0) {
			cout << 10 << '\n';
		}
		// ������ ��ǻ�͵鿡�� �ϴ� ���
		else {
			cout << tmp % 10 << '\n';
		}

	}

	return 0;
}